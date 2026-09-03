Kth Largest Element in an Array
Given an integer array nums and an integer k, return the k-th largest element in the array.
Example:
Input:
nums = [3,2,1,5,6,4]
k = 2
Output: 5

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int , vector<int> , greater<int>> pq;

        int n = nums.size();

        for(int i = 0 ; i<k ; i++)
        {
            pq.push(nums[i]);
        }

        for(int i = k ; i<n ; i++)
        {
            if(nums[i] <= pq.top())
                continue;
            
            pq.pop();
            pq.push(nums[i]);
        }

        return pq.top();
    }
};