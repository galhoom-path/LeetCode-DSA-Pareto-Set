/*
    Problem: Valid Palindrome
    Link:    https://leetcode.com/problems/valid-palindrome/

    Approach: Optimal (two pointers on the original string, skipping non-alphanumerics)

    Idea:
    No copy at all: put L at the start and R at the end of s. Move each pointer past characters
    that are not letters or digits, then compare the two lowercase characters and step inward.

    Steps (example s="A man, a plan, a canal: Panama"):
    1. L = 0, R = n-1
    2. While L < R:
       - while L < R and s[L] is not alphanumeric → L++
       - while L < R and s[R] is not alphanumeric → R--
       - if tolower(s[L]) != tolower(s[R]) → return false
       - L++, R--
    3. Loop ends without a mismatch → return true

    Time Complexity:  O(n) — each pointer crosses the string at most once
    Space Complexity: O(1) — two indices

    Edge Cases:
    - only symbols (" ", ".,")  → pointers meet while skipping → true
    - digits vs letters ("0P")  → '0' vs 'p' → false
    - L < R checks inside the skip loops stop the pointers from crossing

    Example: s = "A man, a plan, a canal: Panama" → true
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int L = 0, R = (int)s.size() - 1;
        while (L < R) {
            while (L < R && !isalnum((unsigned char)s[L])) {
                L++;
            }
            while (L < R && !isalnum((unsigned char)s[R])) {
                R--;
            }
            if (tolower((unsigned char)s[L]) != tolower((unsigned char)s[R])) {
                return false;
            }
            L++;
            R--;
        }
        return true;
    }
};

int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution solution;
    cout << (solution.isPalindrome(s) ? "true" : "false") << endl;
    return 0;
}
