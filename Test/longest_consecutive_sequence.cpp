 Longest Consecutive Sequence
Given an unsorted integer array nums, return the length of the longest consecutive elements sequence.
Your solution must run in O(n) time.
Example:
Input: [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive sequence is [1,2,3,4].

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for (int n : numSet) {
            if (numSet.find(n - 1) == numSet.end()) {
                int length = 1;
                while (numSet.find(n + length) != numSet.end()) {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
