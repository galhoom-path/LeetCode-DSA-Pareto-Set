/*
    Problem: Group Anagrams
    Link:    https://leetcode.com/problems/group-anagrams/

    Approach: Brute Force (compare every unplaced word with every later one)

    Idea:
    Take the first word that is not in a group yet, start a new group with it, then scan every
    later unplaced word and add it if the two are anagrams (same 26 letter counts).

    Steps (example ["eat","tea","tan","ate","nat","bat"]):
    1. used[i] = false for every word
    2. For each i not used: start group {strs[i]}, mark used
    3. For each j > i not used: if isAnagram(strs[i], strs[j]) → add to group, mark used
    4. Push the group; continue with the next unused i
    5. Result: [["eat","tea","ate"], ["tan","nat"], ["bat"]]

    Time Complexity:  O(n² · k) — up to n²/2 pair checks, each O(k) (k = max word length)
    Space Complexity: O(n)      — the used[] flags (output not counted)

    Edge Cases:
    - single word        → one group
    - empty string ""    → anagram of every other "" (both have all-zero counts)
    - no anagrams at all → n groups of one word each

    Example: ["eat","tea","tan","ate","nat","bat"] → [["eat","tea","ate"],["tan","nat"],["bat"]]

    Note: n ≤ 10⁴ means ~5·10⁷ checks of up to 100 letters — too slow on LeetCode; honest baseline only.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = (int)strs.size();
        vector<bool> used(n, false);
        vector<vector<string>> groups;

        for (int i = 0; i < n; i++) {
            if (used[i]) {
                continue;
            }
            used[i] = true;
            vector<string> group = {strs[i]};
            for (int j = i + 1; j < n; j++) {
                if (!used[j] && isAnagram(strs[i], strs[j])) {
                    used[j] = true;
                    group.push_back(strs[j]);
                }
            }
            groups.push_back(group);
        }
        return groups;
    }

private:
    bool isAnagram(const string& a, const string& b) {
        if (a.size() != b.size()) {
            return false;
        }
        int count[26] = {0};
        for (int i = 0; i < (int)a.size(); i++) {
            count[a[i] - 'a']++;
            count[b[i] - 'a']--;
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
