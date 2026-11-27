/*
    Problem: Group Anagrams
    Link:    https://leetcode.com/problems/group-anagrams/

    Approach: Optimal (hash map keyed by the 26-letter count signature)

    Idea:
    Anagrams have identical letter counts. Build a 26-character key where key[c] holds how many
    times letter c appears — no sorting needed, so each word costs O(k) instead of O(k log k).

    Steps (example ["eat","tea","tan","ate","nat","bat"]):
    1. For each word: key = string of 26 zero chars; key[ch - 'a']++ for every letter
       ("eat" and "tea" both produce a=1, e=1, t=1 → same key)
    2. groupsByKey[key].push_back(word)
    3. Move every bucket into the result

    Time Complexity:  O(n · k) — one pass over every letter (+ O(26) key per word)
    Space Complexity: O(n · k) — the map stores every word (+ a 26-char key per group)

    Edge Cases:
    - empty string "" → all-zero key → all "" share one group
    - single word     → one group
    - repeated letters ("aab" vs "abb") → different counts → different keys

    Example: ["eat","tea","tan","ate","nat","bat"] → [["eat","tea","ate"],["tan","nat"],["bat"]]

    Note: A word has at most 100 letters, so every count fits in a char (max 127) and the key can be
          a plain 26-char string. For longer words, join counts with a separator ("1#0#2#…") instead.
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupsByKey;

        for (const string& word : strs) {
            string key(26, '\0');
            for (char ch : word) {
                key[ch - 'a']++;
            }
            groupsByKey[key].push_back(word);
        }

        vector<vector<string>> groups;
        groups.reserve(groupsByKey.size());
        for (auto& entry : groupsByKey) {
            groups.push_back(move(entry.second));
        }
        return groups;
    }
};

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution solution;
    vector<vector<string>> groups = solution.groupAnagrams(strs);
    for (const vector<string>& group : groups) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}
