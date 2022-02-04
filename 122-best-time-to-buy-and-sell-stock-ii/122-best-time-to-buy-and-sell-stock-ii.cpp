class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int res = 0;
        if(prices.size() < 2) return res;
        
        int psize = prices.size();
        
        int buyDay = 0, sellDay = 0;
        
        for(int i = 1 ; i < psize ; i++) {
            
            if(prices[i] >= prices[i-1]) sellDay++;
            else {
                //collect profit into res
                res += prices[sellDay] - prices[buyDay];
                buyDay = i, sellDay = i;
            }
        }
        
        res += prices[sellDay] - prices[buyDay];
        
        return res;
    }
};