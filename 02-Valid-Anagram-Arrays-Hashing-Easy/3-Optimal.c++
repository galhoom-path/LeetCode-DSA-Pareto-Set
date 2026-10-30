/*
    Problem: Valid Anagram
    Link:    https://leetcode.com/problems/valid-anagram/

    Approach: Optimal (frequency count)

    Idea:
    Count how many times each lowercase letter appears. Increment while scanning s,
    decrement while scanning t — if every bucket ends at 0, the strings are anagrams.
    Fixed alphabet size (26) → O(1) extra space relative to the alphabet.

    Steps (example s="anagram", t="nagaram"):
    1. If lengths differ → return false
    2. Create count[26] initialized to 0
    3. For each i: count[s[i]-'a']++, count[t[i]-'a']--
    4. If any count[c] != 0 → return false
    5. Else → return true

    Time Complexity:  O(n) — one pass over both strings (+ fixed 26 scan)
    Space Complexity: O(1) — 26 counters (alphabet size is constant)

    Edge Cases:
    - different lengths → false
    - empty strings     → true
    - same multiset of letters → true
    - one extra / missing letter → some count != 0 → false

    Example: s = "anagram", t = "nagaram" → true

    Note: Problem constraint is lowercase English letters — count[26] is ideal.
          For general Unicode, use unordered_map<char, int> instead.
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

        int count[26] = {0};
        int n = (int)s.size();

        for (int i = 0; i < n; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int c = 0; c < 26; c++) {
            if (count[c] != 0) {
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
