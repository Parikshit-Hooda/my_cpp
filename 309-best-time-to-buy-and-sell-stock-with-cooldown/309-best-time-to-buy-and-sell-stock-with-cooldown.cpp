class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
  if(prices.size() < 2) return 0;
        int oldBoughtStateProfit = -prices[0], oldSoldStateProfit = 0, oldCoolddownStateProfit = 0;
        
        for(int i = 1 ; i < prices.size(); i++) {
            
            int newSoldStateProfit = 0, newBoughtStateProfit = 0, newCoolddownStateProfit = 0;
            
            //calculate above vars
            if(oldBoughtStateProfit < oldCoolddownStateProfit - prices[i]) newSoldStateProfit = oldCoolddownStateProfit - prices[i];
            else newSoldStateProfit = oldBoughtStateProfit;
            
            if(oldSoldStateProfit < oldBoughtStateProfit + prices[i]) newBoughtStateProfit = oldBoughtStateProfit + prices[i];
            else newBoughtStateProfit = oldSoldStateProfit;
            
            if(oldCoolddownStateProfit < oldSoldStateProfit) newCoolddownStateProfit = oldSoldStateProfit;
            else newCoolddownStateProfit = oldCoolddownStateProfit;
            
            oldBoughtStateProfit = newSoldStateProfit, oldSoldStateProfit = newBoughtStateProfit, oldCoolddownStateProfit = newCoolddownStateProfit;
            
        }
        
        return max(oldSoldStateProfit, oldCoolddownStateProfit);
    }
};