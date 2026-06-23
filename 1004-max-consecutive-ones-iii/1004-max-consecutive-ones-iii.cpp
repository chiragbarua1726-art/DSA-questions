class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> f(2, 0);

        int low = 0;
        int res = 0;

        for (int high = 0; high < n; high++) {
            f[nums[high]]++;

            int len = high - low + 1;
            int diff = len - f[1];  

            while (diff > k) {
                f[nums[low]]--;
                low++;

                len = high - low + 1;
                diff = len - f[1];
            }

            len = high - low + 1;
            res = max(res, len);
        }

        return res;
    }
};