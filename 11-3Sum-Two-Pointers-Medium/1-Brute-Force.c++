/*
    Problem: 3Sum
    Link:    https://leetcode.com/problems/3sum/

    Approach: Brute Force (every triple + a set to remove duplicates)

    Idea:
    Try every triple of positions i < j < k. When the three values sum to 0, sort them (so the same
    values always look the same) and put them in a std::set, which keeps only unique triplets.

    Steps (example nums=[-1, 0, 1, 2, -1, -4]):
    1. For every i < j < k
    2. If nums[i] + nums[j] + nums[k] == 0 → sort the triple → insert into `unique`
       (-1, 0, 1) found twice (two different -1s) → stored once
    3. Copy the set into the answer → [[-1, -1, 2], [-1, 0, 1]]

    Time Complexity:  O(n³ log n) — n³/6 triples; each insert into the set is O(log n)
    Space Complexity: O(t)        — the set of t unique triplets (t ≤ n² in the worst case)

    Edge Cases:
    - no triplet sums to 0 ([0, 1, 1])   → []
    - all zeros ([0, 0, 0, 0])           → [[0, 0, 0]] once
    - exactly three elements             → one check

    Example: nums = [-1, 0, 1, 2, -1, -4] → [[-1, -1, 2], [-1, 0, 1]]

    Note: n ≤ 3000 means ~4.5·10⁹ triples — TLE on LeetCode; honest baseline only.
*/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = (int)nums.size();
        set<vector<int>> unique;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> triple = {nums[i], nums[j], nums[k]};
                        sort(triple.begin(), triple.end());
                        unique.insert(triple);
                    }
                }
            }
        }
        return vector<vector<int>>(unique.begin(), unique.end());
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
