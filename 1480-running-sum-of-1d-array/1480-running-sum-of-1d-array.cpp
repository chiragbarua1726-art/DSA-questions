class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int prefix = 0;

        for(int i = 0; i<n ; i++)
        {
            prefix = prefix + nums[i];
            ans.push_back(prefix);
        }
        return ans;
    }
};