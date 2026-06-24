class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int i = 0;
        int minend = arr[0];
        int maxend = arr[0];
        int ans = abs(arr[0]);

        for(i=1 ; i<arr.size() ; i++)
        {
            int vmin1 = minend + arr[i];
            int vmin2 = arr[i];
            minend = min(vmin1,vmin2);
            int vmax1 = maxend + arr[i];
            int vmax2 = arr[i];
            maxend = max(vmax1,vmax2);

            ans = max(ans, max(abs(maxend), abs(minend)));
        }
        return ans;
    }
};