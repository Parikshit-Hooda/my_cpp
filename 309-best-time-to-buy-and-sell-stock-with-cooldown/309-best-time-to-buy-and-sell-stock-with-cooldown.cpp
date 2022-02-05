class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() < 2) return 0;
        int obsp = -prices[0], ossp = 0, ocsp = 0;
        
        for(int i = 1 ; i < prices.size(); i++) {
            
            int nbsp = 0, nssp = 0, ncsp = 0;
            
            //calculate above vars
            if(obsp < ocsp - prices[i]) nbsp = ocsp - prices[i];
            else nbsp = obsp;
            
            if(ossp < obsp + prices[i]) nssp = obsp + prices[i];
            else nssp = ossp;
            
            if(ocsp < ossp) ncsp = ossp;
            else ncsp = ocsp;
            
            obsp = nbsp, ossp = nssp, ocsp = ncsp;
            
        }
        
        return max(ossp, ocsp);
    }
};