class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy=0, sell=0, profit=0;
        
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i-1]) {
                //curr ele smaller than prev ele, <dip>, update buy sell
                sell++;
            }
            else {
             //add the profit
                profit += prices[sell] - prices[buy];
                sell = i, buy = i;
            }
        
        } // for
        
        profit += prices[sell] - prices[buy];
        
        
        return profit;
    }
};