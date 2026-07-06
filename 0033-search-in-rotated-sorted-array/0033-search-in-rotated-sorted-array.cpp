class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;
        int n = nums.size();

        while (low <= high) {

            int guess = (low + high) / 2;

            if (nums[guess] == target)
                return guess;

            
            if (nums[guess] > nums[n - 1]) {

                if (target > nums[guess]) {
                    low = guess + 1;
                }
                else {
                    if (target >= nums[0])
                        high = guess - 1;
                    else
                        low = guess + 1;
                }
            }

            
            else {

                if (target < nums[guess]) {
                    high = guess - 1;
                }
                else {
                    if (target <= nums[n - 1])
                        low = guess + 1;
                    else
                        high = guess - 1;
                }
            }
        }

        return -1;
    }
};