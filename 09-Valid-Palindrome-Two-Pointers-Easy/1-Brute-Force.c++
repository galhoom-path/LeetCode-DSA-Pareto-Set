/*
    Problem: Valid Palindrome
    Link:    https://leetcode.com/problems/valid-palindrome/

    Approach: Brute Force (clean copy + reversed copy + compare)

    Idea:
    Do exactly what the definition says: keep only letters and digits, lowercase them, then check
    that the cleaned string equals its own reverse.

    Steps (example s="A man, a plan, a canal: Panama"):
    1. cleaned = "amanaplanacanalpanama"   (drop non-alphanumerics, lowercase the rest)
    2. reversed = reverse of cleaned        → "amanaplanacanalpanama"
    3. return cleaned == reversed           → true

    Time Complexity:  O(n) — one pass to clean, one to reverse, one to compare
    Space Complexity: O(n) — two extra strings (cleaned + reversed)

    Edge Cases:
    - only symbols / spaces (" ")    → cleaned is "" → palindrome → true
    - digits count ("0P")            → "0p" vs "p0" → false
    - mixed case ("Aa")              → "aa" → true

    Example: s = "A man, a plan, a canal: Panama" → true

    Note: No approach can beat O(n) time (every character must be read) — the ladder here improves
          MEMORY: two copies → one copy → none.
          The (unsigned char) cast keeps isalnum/tolower defined for every char value.
*/

#include <iostream>
#include <string>
#include <algorithm>
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
        string reversed(cleaned.rbegin(), cleaned.rend());
        return cleaned == reversed;
    }
};

int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution solution;
    cout << (solution.isPalindrome(s) ? "true" : "false") << endl;
    return 0;
}
