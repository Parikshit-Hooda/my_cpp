class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int leastSoFar = INT_MAX, overallProfit = 0, profitIfSoldToday = 0;
        int pricesLength = prices.size();
        for(int i = 0 ; i < pricesLength ; i++) {
            if(leastSoFar > prices[i]) leastSoFar = prices[i];
            
            profitIfSoldToday = prices[i] - leastSoFar;
            
            if(profitIfSoldToday > overallProfit) overallProfit = profitIfSoldToday;
            
        }
        
        return overallProfit;
        
    }
};