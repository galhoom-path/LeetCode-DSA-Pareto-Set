/*
    Problem: Top K Frequent Elements
    Link:    https://leetcode.com/problems/top-k-frequent-elements/

    Approach: Optimized (count + min-heap of size k)

    Idea:
    Keep only the k best candidates seen so far in a MIN-heap ordered by frequency. The least
    frequent candidate sits on top, so when the heap grows past k we pop exactly the one that
    can no longer be in the answer. What remains at the end are the k most frequent values.

    Steps (example nums=[1,1,1,2,2,3], k=2):
    1. Count: 1→3, 2→2, 3→1
    2. For each (value, freq): push (freq, value); if heap size > k → pop the smallest freq
       push (3,1) → push (2,2) → push (1,3) → size 3 > 2 → pop (1,3)
    3. Heap holds (2,2), (3,1) → answer values [2, 1]

    Time Complexity:  O(n + u log k) — counting O(n); each of u values costs at most O(log k)
    Space Complexity: O(u + k)       — count map + heap of at most k+1 pairs

    Edge Cases:
    - k == 1                         → heap of size 1 keeps the single most frequent value
    - k == number of distinct values → nothing is ever popped
    - single element                 → [that element]

    Example: nums = [1,1,1,2,2,3], k = 2 → [2, 1] (any order is accepted)

    Note: Same heap trick as Kth Largest (#40, #42) — see prep sheet 14.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <utility>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // min-heap on frequency: (frequency, value)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (auto& entry : freq) {
            minHeap.push({entry.second, entry.first});
            if ((int)minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
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
