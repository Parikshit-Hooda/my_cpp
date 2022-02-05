class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
        if(prices.size() < 2) return 0;
        int psize = prices.size();
        vector<vector<int>> dpTxnDay(k+1, vector<int>(psize, 0));
        
        
        for(int t = 1; t <= k ; t++) {
            int currmax = INT_MIN;
            
            for(int d = 1; d < psize; d++) {
                if(dpTxnDay[t-1][d-1] - prices[d-1] > currmax) {
                    currmax = dpTxnDay[t-1][d-1] - prices[d-1];
                }
                
                if(dpTxnDay[t][d-1] < currmax + prices[d]) {
                    dpTxnDay[t][d] = currmax + prices[d];
                } else {
                    dpTxnDay[t][d] = dpTxnDay[t][d-1];
                }
            }
        }
        return dpTxnDay[k][psize-1];
        
    }
};