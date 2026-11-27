/*
    Problem: Two Sum II — Input Array Is Sorted
    Link:    https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

    Approach: Optimal (two pointers from both ends)

    Idea:
    Start with the smallest (L) and largest (R) values. If their sum is too small, the only way to
    grow it is to move L right; if too big, move R left. Each step rules out one value for good,
    so the pointers meet the answer in one linear pass.

    Steps (example numbers=[2, 7, 11, 15], target=9):
    1. L = 0, R = n-1
    2. sum = numbers[L] + numbers[R]
       - sum == target → return {L+1, R+1}
       - sum <  target → L++
       - sum >  target → R--
    3. 2+15=17 > 9 → R=2; 2+11=13 > 9 → R=1; 2+7=9 → [1, 2]

    Time Complexity:  O(n) — L and R together move at most n-1 times
    Space Complexity: O(1) — two indices

    Edge Cases:
    - n = 2                    → L=0, R=1 is the answer immediately
    - duplicates ([1, 1], 2)   → L < R guarantees two different positions
    - all negative ([-3, -1, 0], -4) → same rule, ordering is what matters

    Example: numbers = [2, 7, 11, 15], target = 9 → [1, 2]

    Note: Why it is safe: when sum < target, numbers[L] plus ANY remaining value is ≤ sum, so
          numbers[L] can never be in the answer — discarding it loses nothing (same for R).
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int L = 0, R = (int)numbers.size() - 1;
        while (L < R) {
            int sum = numbers[L] + numbers[R];
            if (sum == target) {
                return {L + 1, R + 1};
            }
            if (sum < target) {
                L++;
            } else {
                R--;
            }
        }
        return {};  // unreachable: exactly one answer is guaranteed
    }
};

int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(numbers, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
