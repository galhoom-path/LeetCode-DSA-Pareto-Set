/*
    Problem: 3Sum
    Link:    https://leetcode.com/problems/3sum/

    Approach: Optimized (sort + fix the first value + hash-set Two Sum)

    Idea:
    Fixing nums[i] turns 3Sum into Two Sum: find nums[j] + third = -nums[i] to the right of i.
    Solve that Two Sum in one pass with an unordered_set of values seen so far (like #3).
    Sorting first means each triplet comes out as (nums[i], third, nums[j]) in ascending order,
    so a std::set can drop the duplicates.

    Steps (example nums=[-1, 0, 1, 2, -1, -4]):
    1. Sort → [-4, -1, -1, 0, 1, 2]
    2. For each i (skip nums[i] equal to nums[i-1] — that first value was already handled):
       seen = {}; for each j > i: third = -nums[i] - nums[j]
       - third in seen → insert (nums[i], third, nums[j]) into `unique`
       - seen.insert(nums[j])
    3. i=1 (-1): j finds 2 with third -1 → (-1,-1,2); j finds 1 with third 0 → (-1,0,1)
    4. Answer [[-1, -1, 2], [-1, 0, 1]]

    Time Complexity:  O(n² log n) — n·n hash steps (O(1) average) + set inserts O(log n)
    Space Complexity: O(n + t)    — the `seen` set plus t unique triplets

    Edge Cases:
    - all zeros         → (0,0,0) is inserted repeatedly, the set keeps one
    - no answer         → []
    - duplicates at i   → skipping equal nums[i] avoids recomputing the same first value

    Example: nums = [-1, 0, 1, 2, -1, -4] → [[-1, -1, 2], [-1, 0, 1]]

    Note: Still needs a set to remove duplicate triplets — the optimal version removes that need.
*/

#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        set<vector<int>> unique;

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;  // same first value as before → same triplets
            }
            unordered_set<int> seen;
            for (int j = i + 1; j < n; j++) {
                int third = -nums[i] - nums[j];
                if (seen.count(third)) {
                    unique.insert({nums[i], third, nums[j]});  // already ascending: third ≤ nums[j]
                }
                seen.insert(nums[j]);
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
