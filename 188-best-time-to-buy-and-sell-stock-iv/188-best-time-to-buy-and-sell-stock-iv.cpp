class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
        if(prices.size() < 2) return 0;
        int psize = prices.size();
        vector<vector<int>> dp(k+1, vector<int>(psize, 0));
        
        
        for(int t = 1; t <= k ; t++) {
            int currmax = INT_MIN;
            
            for(int d = 1; d < psize; d++) {
                if(dp[t-1][d-1] - prices[d-1] > currmax) {
                    currmax = dp[t-1][d-1] - prices[d-1];
                }
                
                
                if(dp[t][d-1] < currmax + prices[d]) {
                    dp[t][d] = currmax + prices[d];
                } else {
                    dp[t][d] = dp[t][d-1];
                }
            }
            
            
        }
        
        
        return dp[k][psize-1];
        
    }
};