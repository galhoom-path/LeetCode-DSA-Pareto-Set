/*
    Problem: Valid Anagram
    Link:    https://leetcode.com/problems/valid-anagram/

    Approach: Optimized (sort + compare)

    Idea:
    Anagrams contain the same characters with the same frequencies, so sorting both
    strings makes them identical if and only if they are anagrams.

    Steps (example s="anagram", t="nagaram"):
    1. If lengths differ → return false
    2. Sort s  →  "aaagmnr"
    3. Sort t  →  "aaagmnr"
    4. Return s == t

    Time Complexity:  O(n log n) — dominated by sorting both strings
    Space Complexity: O(log n)   — typical sort recursion stack (may be O(n) depending on impl)

    Edge Cases:
    - different lengths → false before sorting
    - empty strings     → true
    - already sorted equal → true

    Example: s = "anagram", t = "nagaram" → true

    Note: sort mutates local copies / parameters (fine for LeetCode).
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if ((int)s.size() != (int)t.size()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
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
