/*
    Problem: Valid Anagram
    Link:    https://leetcode.com/problems/valid-anagram/

    Approach: Brute Force

    Idea:
    For each character in s, scan t for a matching unused character and mark it used.
    If every char in s finds a match and lengths are equal, the strings are anagrams.

    Steps (example s="anagram", t="nagaram"):
    1. If lengths differ → return false
    2. Copy t into a mutable string `remaining`
    3. For each char c in s
    4. Scan remaining for c; if found, mark that slot used (e.g. set to '\0')
    5. If no match for c → return false
    6. If every char matched → return true

    Time Complexity:  O(n²) — for each of n chars in s, scan up to n chars in t
    Space Complexity: O(n)  — copy of t (or O(1) if we mutate t in place)

    Edge Cases:
    - different lengths → false
    - empty strings    → true (both length 0)
    - same string      → true
    - same letters, different counts → false

    Example: s = "anagram", t = "nagaram" → true

    Note: Honest slow baseline — fine for learning; prefer sort or counts in interviews.
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if ((int)s.size() != (int)t.size()) {
            return false;
        }

        string remaining = t;
        int n = (int)s.size();

        for (int i = 0; i < n; i++) {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (remaining[j] == s[i]) {
                    remaining[j] = '\0';
                    found = true;
                    break;
                }
            }
            if (!found) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string s = "anagram";
    string t = "nagaram";
    Solution solution;
    bool result = solution.isAnagram(s, t);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
