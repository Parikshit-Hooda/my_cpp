class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
        int minPrice = INT_MAX, maxProfit = 0;
        for(auto price : prices) {
            //first, update minprice
            minPrice = min(minPrice, price);
            //second, update maxprofit
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};