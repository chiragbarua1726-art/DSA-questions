class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int low = 0;
        int res = 1;
        int high = 1;

        while (high < nums.size()) {
            if (nums[high] == nums[high - 1]) {
                high++;
            }
            else {
                low++;
                nums[low] = nums[high];
                res++;
                high++;
            }
        }

        return res;
    }
};