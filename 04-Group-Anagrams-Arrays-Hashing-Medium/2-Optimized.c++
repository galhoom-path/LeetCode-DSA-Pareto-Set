/*
    Problem: Group Anagrams
    Link:    https://leetcode.com/problems/group-anagrams/

    Approach: Optimized (hash map keyed by the sorted word)

    Idea:
    Two words are anagrams exactly when their letters, sorted, are the same string. Use that
    sorted string as a key: every anagram lands in the same bucket in one pass.

    Steps (example ["eat","tea","tan","ate","nat","bat"]):
    1. For each word: key = sorted(word)   ("eat" → "aet", "tan" → "ant", "bat" → "abt")
    2. groupsByKey[key].push_back(word)
    3. Move every bucket into the result
    4. Result: [["eat","tea","ate"], ["tan","nat"], ["bat"]] (bucket order may differ)

    Time Complexity:  O(n · k log k) — sort each of n words of length ≤ k
    Space Complexity: O(n · k)       — keys + words stored in the map

    Edge Cases:
    - empty string "" → key "" → all empty strings share one group
    - single word     → one group
    - all distinct    → n buckets of one word each

    Example: ["eat","tea","tan","ate","nat","bat"] → [["eat","tea","ate"],["tan","nat"],["bat"]]

    Note: Group order in the output is not defined (unordered_map) — LeetCode accepts any order.
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupsByKey;

        for (const string& word : strs) {
            string key = word;
            sort(key.begin(), key.end());
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
