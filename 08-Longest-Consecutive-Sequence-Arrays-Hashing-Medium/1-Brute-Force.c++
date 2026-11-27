/*
    Problem: Longest Consecutive Sequence
    Link:    https://leetcode.com/problems/longest-consecutive-sequence/

    Approach: Brute Force (extend a streak from every number with linear lookups)

    Idea:
    From every number x, keep asking "is x+1 in the array?" by scanning the whole array, and count
    how far the run goes. The longest run found from any start is the answer.

    Steps (example nums=[100, 4, 200, 1, 3, 2]):
    1. best = 0
    2. For each x in nums: length = 1, next = x + 1
    3. While contains(nums, next) (a linear scan): length++, next++
    4. best = max(best, length)
    5. From x=1: 2, 3, 4 found → length 4 → best = 4

    Time Complexity:  O(n³) — n starts × a run of up to n steps × an O(n) scan per step
    Space Complexity: O(1)  — no extra structures

    Edge Cases:
    - empty array           → 0 (the loop never runs)
    - duplicates ([1, 2, 2, 3]) → still counted once per value in a run → 3
    - negative values       → x + 1 works the same; no overflow at |x| ≤ 10⁹

    Example: nums = [100, 4, 200, 1, 3, 2] → 4  (the run 1, 2, 3, 4)

    Note: Far too slow for n = 10⁵ — it rescans the array for every single step.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int best = 0;
        for (int x : nums) {
            int length = 1;
            int next = x + 1;
            while (contains(nums, next)) {
                length++;
                next++;
            }
            best = max(best, length);
        }
        return best;
    }

private:
    bool contains(const vector<int>& nums, int target) {
        for (int value : nums) {
            if (value == target) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    Solution solution;
    cout << solution.longestConsecutive(nums) << endl;
    return 0;
}
