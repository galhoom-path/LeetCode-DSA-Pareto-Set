/*
    Problem: Product of Array Except Self
    Link:    https://leetcode.com/problems/product-of-array-except-self/

    Approach: Brute Force

    Idea:
    For every index i, multiply all the other elements together. Division is forbidden, so each
    product is rebuilt from scratch.

    Steps (example nums=[1, 2, 3, 4]):
    1. For each i from 0 to n-1
    2. product = 1; for each j != i: product *= nums[j]
    3. answer[i] = product
    4. Result: [24, 12, 8, 6]

    Time Complexity:  O(n²) — n products of n-1 factors each
    Space Complexity: O(1)  — extra (the output array is not counted)

    Edge Cases:
    - one zero ([1, 0, 3])   → only the zero's position is non-zero
    - two zeros              → every answer is 0
    - negative values        → sign handled by ordinary multiplication

    Example: nums = [1, 2, 3, 4] → [24, 12, 8, 6]

    Note: n ≤ 10⁵ → up to 10¹⁰ multiplications: TLE on LeetCode; honest baseline only.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> answer(n);
        for (int i = 0; i < n; i++) {
            int product = 1;
            for (int j = 0; j < n; j++) {
                if (j != i) {
                    product *= nums[j];
                }
            }
            answer[i] = product;
        }
        return answer;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution solution;
    vector<int> answer = solution.productExceptSelf(nums);
    for (int value : answer) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
