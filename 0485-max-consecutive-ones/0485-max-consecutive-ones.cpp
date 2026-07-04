class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int low = 0;
       int high = 0;
       int res = 0;

       while(high<nums.size())
       {
        if(nums[high] == 0)
        {
        int len = high - low;;
        res = max(res,len);

        low = high + 1;
        }

        high++;
       }
       res = max(res,high-low);
       return res;
    }
};