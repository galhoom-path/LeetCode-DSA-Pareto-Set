/*
    Problem: Two Sum
    Link:    https://leetcode.com/problems/two-sum/

    Approach: Optimal (one-pass hash map: value → index)

    Idea:
    For each nums[i], the partner it needs is target - nums[i]. Keep every value seen so far in
    an unordered_map from value to index; if the partner is already there, we are done.
    Checking BEFORE inserting nums[i] prevents pairing an element with itself.

    Steps (example nums=[2, 7, 11, 15], target=9):
    1. Create empty map `indexOf`
    2. For each i: need = target - nums[i]
    3. If need is in indexOf → return {indexOf[need], i}
    4. Else store indexOf[nums[i]] = i
    5. Example: i=0 stores 2→0; i=1 needs 2 → found → return {0, 1}

    Time Complexity:  O(n) average — one pass, map lookup/insert O(1) average
    Space Complexity: O(n)         — up to n values in the map

    Edge Cases:
    - duplicates ([3, 3], 6)   → first 3 is stored, the second finds it → [0, 1]
    - zero target ([0, 4, 0], 0) → second 0 finds the first
    - negative values          → target - nums[i] stays within int (|value| ≤ 2·10⁹)

    Example: nums = [2, 7, 11, 15], target = 9 → [0, 1]
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexOf;  // value → index where we saw it
        indexOf.reserve(nums.size());

        int n = (int)nums.size();
        for (int i = 0; i < n; i++) {
            int need = target - nums[i];
            if (indexOf.count(need)) {
                return {indexOf[need], i};
            }
            indexOf[nums[i]] = i;
        }
        return {};  // unreachable: exactly one answer is guaranteed
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
