/*
    Problem: 3Sum
    Link:    https://leetcode.com/problems/3sum/

    Approach: Optimal (sort + fix the first value + two pointers, skipping duplicates)

    Idea:
    After sorting, fix nums[i] and look for a pair in nums[i+1 … n-1] that sums to -nums[i] with two
    pointers (exactly #10 Two Sum II). Skipping equal values at i, L and R means every triplet is
    produced exactly once — no set needed.

    Steps (example nums=[-1, 0, 1, 2, -1, -4]):
    1. Sort → [-4, -1, -1, 0, 1, 2]
    2. For each i: if nums[i] > 0 → stop (three positives cannot sum to 0)
                   if nums[i] == nums[i-1] → skip (same first value)
    3. L = i+1, R = n-1; while L < R:
       - sum == 0 → record; move L right and R left past equal values
       - sum <  0 → L++
       - sum >  0 → R--
    4. i=1: (-1,-1,2) and (-1,0,1); i=2 skipped; i=3: no pair → [[-1, -1, 2], [-1, 0, 1]]

    Time Complexity:  O(n²) — sort O(n log n) + for each i a linear two-pointer scan
    Space Complexity: O(1)  — extra besides the output (sort may use O(log n) stack)

    Edge Cases:
    - all zeros ([0, 0, 0, 0]) → recorded once, then L/R skip the remaining zeros
    - smallest value > 0       → early break, []
    - many duplicates          → the skip loops keep each triplet unique

    Example: nums = [-1, 0, 1, 2, -1, -4] → [[-1, -1, 2], [-1, 0, 1]]

    Note: sort mutates the input (fine for LeetCode). |sum| ≤ 3·10⁵, so int is safe.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        vector<vector<int>> triplets;

        for (int i = 0; i < n - 2; i++) {
            if (nums[i] > 0) {
                break;  // everything to the right is positive too
            }
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;  // same first value → same triplets
            }
            int L = i + 1, R = n - 1;
            while (L < R) {
                int sum = nums[i] + nums[L] + nums[R];
                if (sum == 0) {
                    triplets.push_back({nums[i], nums[L], nums[R]});
                    L++;
                    R--;
                    while (L < R && nums[L] == nums[L - 1]) {
                        L++;
                    }
                    while (L < R && nums[R] == nums[R + 1]) {
                        R--;
                    }
                } else if (sum < 0) {
                    L++;
                } else {
                    R--;
                }
            }
        }
        return triplets;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution solution;
    vector<vector<int>> triplets = solution.threeSum(nums);
    for (const vector<int>& t : triplets) {
        cout << "[" << t[0] << ", " << t[1] << ", " << t[2] << "] ";
    }
    cout << endl;
    return 0;
}
