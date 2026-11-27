/*
    Problem: Product of Array Except Self
    Link:    https://leetcode.com/problems/product-of-array-except-self/

    Approach: Optimal (prefix in the output array + running suffix)

    Idea:
    Same left × right idea, but without the helper arrays: first store the prefix products directly
    in `answer`, then walk from the right keeping one running `suffix` number and multiply it in.

    Steps (example nums=[1, 2, 3, 4]):
    1. Left pass:  answer = [1, 1, 2, 6]              (answer[i] = product of nums[0…i-1])
    2. Right pass: suffix = 1
       i=3: answer[3] = 6*1 = 6,   suffix = 4
       i=2: answer[2] = 2*4 = 8,   suffix = 12
       i=1: answer[1] = 1*12 = 12, suffix = 24
       i=0: answer[0] = 1*24 = 24
    3. Result: [24, 12, 8, 6]

    Time Complexity:  O(n) — two linear passes
    Space Complexity: O(1) — extra; only `suffix` (the output array is not counted, as the problem allows)

    Edge Cases:
    - zeros     → propagate naturally, no special case
    - n = 2     → [nums[1], nums[0]]
    - negatives → plain multiplication

    Example: nums = [1, 2, 3, 4] → [24, 12, 8, 6]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = (int)nums.size();
        vector<int> answer(n, 1);

        for (int i = 1; i < n; i++) {
            answer[i] = answer[i - 1] * nums[i - 1];
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];
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
