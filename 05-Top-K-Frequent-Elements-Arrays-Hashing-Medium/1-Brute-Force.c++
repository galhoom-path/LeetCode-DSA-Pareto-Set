/*
    Problem: Top K Frequent Elements
    Link:    https://leetcode.com/problems/top-k-frequent-elements/

    Approach: Brute Force (count, then sort every distinct value by frequency)

    Idea:
    Count how often each value appears, put every (frequency, value) pair in a list, sort the
    whole list from most to least frequent, and take the first k values.

    Steps (example nums=[1,1,1,2,2,3], k=2):
    1. Count: 1→3, 2→2, 3→1
    2. List of (freq, value): [(3,1), (2,2), (1,3)]
    3. Sort by freq descending → [(3,1), (2,2), (1,3)]
    4. Take the first k values → [1, 2]

    Time Complexity:  O(n + u log u) — counting is O(n); sorting u distinct values is O(u log u)
                      (u ≤ n, so O(n log n) in the worst case)
    Space Complexity: O(u)           — the count map and the (freq, value) list

    Edge Cases:
    - single element ([1], k=1)           → [1]
    - k == number of distinct values      → every distinct value
    - negative values                     → counted like any other key

    Example: nums = [1,1,1,2,2,3], k = 2 → [1, 2]

    Note: The sort orders ALL u values although only k are needed — that is the waste the next
          approaches remove. The answer is guaranteed unique, so ties never decide the output.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <utility>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> byFreq;  // (frequency, value)
        byFreq.reserve(freq.size());
        for (auto& entry : freq) {
            byFreq.push_back({entry.second, entry.first});
        }
        sort(byFreq.begin(), byFreq.end(), greater<pair<int, int>>());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(byFreq[i].second);
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    Solution solution;
    vector<int> result = solution.topKFrequent(nums, k);
    for (int value : result) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
