class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int minans = arr[0];
        int currminans = arr[0];

        int bestans = arr[0];
        int currbestans = arr[0];

        int total = arr[0];

        for(int i = 1; i < arr.size(); i++)
        {
            currbestans = max(currbestans + arr[i], arr[i]);
            bestans = max(bestans, currbestans);

            currminans = min(currminans + arr[i], arr[i]);
            minans = min(minans, currminans);

            total += arr[i];
        }

        int cirsum = total - minans;

        if(cirsum == 0)
        {
            return bestans;
        }

        return max(bestans, cirsum);
    }
};