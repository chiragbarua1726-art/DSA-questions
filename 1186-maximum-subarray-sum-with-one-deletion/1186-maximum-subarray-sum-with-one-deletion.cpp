class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int i = 0;
        int nodel = arr[0];
        int onedel = INT_MIN;
        int ans = arr[0];

        for(i=1 ; i<arr.size() ; i++)
        {
            int preonedel = onedel;
            int prenodel = nodel;
            nodel = max(prenodel+arr[i],arr[i]);
            int v2;

            if(preonedel == INT_MIN)
            {
                v2 = arr[i];
            }else{
                v2 = preonedel + arr[i];
            }
            onedel = max(v2,prenodel);
            ans = max(ans,max(onedel,nodel));
        }
        return ans;
    }
};