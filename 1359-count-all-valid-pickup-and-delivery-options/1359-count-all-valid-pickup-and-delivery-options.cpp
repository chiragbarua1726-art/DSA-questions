class Solution {
public:
    int countOrders(int n) {
        long res = 1;
        long MOD = 1000000007;

        for(int i = 1 ; i <= n ; i++)
        {
            res = res * (i * 2 - 1) * i % MOD;
        }
        
        return res;
    }
};