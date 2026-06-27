class Solution {
public:
    int find(vector<int> &a)
    {
        int maxcount = 0;
        for(int i = 0 ; i<256 ; i++)
        maxcount = max(maxcount,a[i]);
        return maxcount;
    }
    
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> f(256, 0);
        int low = 0;
        int high = 0;
        int res = INT_MIN;

        for(high = 0 ; high<n ; high++){
            f[s[high]]++;
            int maxcount = find(f);
            int len = high - low + 1;
            int diff = len - maxcount ;

            while(diff>k){
                f[s[low]]--;
                low++;
                maxcount = find(f);
                len = high - low + 1;
                diff = len - maxcount;
            }

            len = high - low + 1;
            res = max(len , res);
        }
        return res;
    }
};