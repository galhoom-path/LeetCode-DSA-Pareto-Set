/*
    Problem: Valid Palindrome
    Link:    https://leetcode.com/problems/valid-palindrome/

    Approach: Optimized (one clean copy + two indices)

    Idea:
    The reversed copy is unnecessary: compare the cleaned string from both ends at once. Mismatch
    anywhere → not a palindrome. This saves one full copy and stops at the first mismatch.

    Steps (example s="race a car"):
    1. cleaned = "raceacar"
    2. L = 0, R = 7
    3. While L < R: cleaned[L] != cleaned[R] → return false; else L++, R--
       r=r, a=a, c=c, e≠a → false

    Time Complexity:  O(n) — one cleaning pass + at most n/2 comparisons
    Space Complexity: O(n) — the cleaned copy

    Edge Cases:
    - empty cleaned string → loop never runs → true
    - single character     → L == R → true
    - odd length           → the middle character is never compared (it always matches itself)

    Example: s = "race a car" → false
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for (char ch : s) {
            unsigned char c = (unsigned char)ch;
            if (isalnum(c)) {
                cleaned += (char)tolower(c);
            }
        }

        int L = 0, R = (int)cleaned.size() - 1;
        while (L < R) {
            if (cleaned[L] != cleaned[R]) {
                return false;
            }
            L++;
            R--;
        }
        return true;
    }
};

int main() {
    string s = "race a car";
    Solution solution;
    cout << (solution.isPalindrome(s) ? "true" : "false") << endl;
    return 0;
}
