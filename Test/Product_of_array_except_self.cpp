Q1. Product of Array Except Self
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all elements
of nums except nums[i].
You must solve it in O(n) time and without using division.
Example:
Input: [1,2,3,4]
Output: [24,12,8,6]



class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        
        int pre = 1; 
        

        for(int i = 0 ; i<n ; i++)
        {
            res[i] = pre;
            pre = pre * nums[i];
        }

        int suf = 1;

        for(int i = n-1 ; i >= 0 ; i-- )
        {
            res[i] *= suf;
            suf = suf * nums[i];
        }

        return res;
    }
};