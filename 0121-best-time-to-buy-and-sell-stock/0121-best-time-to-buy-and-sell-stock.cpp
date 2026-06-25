class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int minprice = INT_MAX; 
        int maxprofit = 0;
    
        for(i = 0 ; i<prices.size() ; i++)
        {
            int diff = prices[i] - minprice;
            minprice = min(minprice,prices[i]);
            maxprofit = max(maxprofit,diff);
        }
        return maxprofit;  
    }
};