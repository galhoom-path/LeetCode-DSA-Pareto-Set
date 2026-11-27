/*
    Problem: Top K Frequent Elements
    Link:    https://leetcode.com/problems/top-k-frequent-elements/

    Approach: Optimal (count + bucket sort by frequency)

    Idea:
    A frequency is always between 1 and n. Make n+1 buckets where buckets[f] lists the values
    that appear exactly f times, then walk the buckets from f = n down to 1 and collect values
    until we have k. No comparison sort is needed, so the whole thing is linear.

    Steps (example nums=[1,1,1,2,2,3], k=2):
    1. Count: 1→3, 2→2, 3→1
    2. buckets[3] = [1], buckets[2] = [2], buckets[1] = [3]
    3. Walk f = 6, 5, 4 (empty), 3 → take 1, 2 → take 2 → have k values → stop
    4. Result [1, 2]

    Time Complexity:  O(n) — counting O(n), filling buckets O(u), walking at most n+1 buckets
    Space Complexity: O(n) — n+1 buckets plus the count map

    Edge Cases:
    - all values equal ([4,4,4], k=1) → buckets[3] = [4] → [4]
    - all values distinct, k == n     → every value sits in buckets[1]
    - single element                  → [that element]

    Example: nums = [1,1,1,2,2,3], k = 2 → [1, 2]

    Note: The guarantee that the answer is unique means we never have to split a bucket by ties.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        int n = (int)nums.size();
        vector<vector<int>> buckets(n + 1);  // buckets[f] = values appearing f times
        for (auto& entry : freq) {
            buckets[entry.second].push_back(entry.first);
        }

        vector<int> result;
        for (int f = n; f >= 1 && (int)result.size() < k; f--) {
            for (int value : buckets[f]) {
                result.push_back(value);
                if ((int)result.size() == k) {
                    break;
                }
            }
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
