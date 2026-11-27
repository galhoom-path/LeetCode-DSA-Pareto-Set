/*
    Problem: Two Sum II — Input Array Is Sorted
    Link:    https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

    Approach: Optimized (binary search for each complement)

    Idea:
    The array is sorted, so for each numbers[i] we can binary-search its partner
    target - numbers[i] in the part to its right instead of scanning it linearly.

    Steps (example numbers=[2, 3, 4], target=6):
    1. For each i: need = target - numbers[i]
    2. Binary search need in numbers[i+1 … n-1]
       - found at mid → return {i+1, mid+1}
    3. i=0: need 4 → found at index 2 → [1, 3]

    Time Complexity:  O(n log n) — n binary searches of O(log n)
    Space Complexity: O(1)       — a few indices

    Edge Cases:
    - duplicates ([1, 1, 3], 2) → searching only to the right of i avoids reusing numbers[i]
    - negative target           → binary search works on any sorted values
    - partner right next to i   → lo = i+1 covers it

    Example: numbers = [2, 3, 4], target = 6 → [1, 3]

    Note: Searching only right of i is enough — if the pair is (a, b) with a first, i reaches a.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = (int)numbers.size();
        for (int i = 0; i < n; i++) {
            int need = target - numbers[i];
            int lo = i + 1, hi = n - 1;
            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if (numbers[mid] == need) {
                    return {i + 1, mid + 1};
                }
                if (numbers[mid] < need) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
        }
        return {};  // unreachable: exactly one answer is guaranteed
    }
};

int main() {
    vector<int> numbers = {2, 3, 4};
    int target = 6;
    Solution solution;
    vector<int> result = solution.twoSum(numbers, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
