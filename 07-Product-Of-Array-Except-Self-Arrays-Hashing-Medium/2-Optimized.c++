/*
    Problem: Product of Array Except Self
    Link:    https://leetcode.com/problems/product-of-array-except-self/

    Approach: Optimized (prefix and suffix product arrays)

    Idea:
    "Everything except i" = (everything left of i) × (everything right of i).
    Precompute both sides once: prefix[i] = product of nums[0…i-1], suffix[i] = product of nums[i+1…n-1].

    Steps (example nums=[1, 2, 3, 4]):
    1. prefix = [1, 1, 2, 6]        (prefix[0] = 1, prefix[i] = prefix[i-1] * nums[i-1])
    2. suffix = [24, 12, 4, 1]      (suffix[n-1] = 1, suffix[i] = suffix[i+1] * nums[i+1])
    3. answer[i] = prefix[i] * suffix[i] → [24, 12, 8, 6]

    Time Complexity:  O(n) — three linear passes
    Space Complexity: O(n) — two helper arrays (output not counted)

    Edge Cases:
    - zeros       → they simply propagate through the products
    - n = 2       → answer = [nums[1], nums[0]]
    - negatives   → plain multiplication

    Example: nums = [1, 2, 3, 4] → [24, 12, 8, 6]

    Note: LeetCode guarantees every prefix/suffix product fits in a 32-bit int.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> prefix(n, 1), suffix(n, 1), answer(n);

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < n; i++) {
            answer[i] = prefix[i] * suffix[i];
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
