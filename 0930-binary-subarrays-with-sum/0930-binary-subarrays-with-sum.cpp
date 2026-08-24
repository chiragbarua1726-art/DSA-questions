class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mp;

        int sum = 0;
        int ans = 0;

        mp[0] = 1;

        for (int x : nums) {
            sum += x;

            int needed = sum - goal;

            if (mp.count(needed)) {
                ans += mp[needed];
            }

            mp[sum]++;
        }

        return ans;
    }
};
