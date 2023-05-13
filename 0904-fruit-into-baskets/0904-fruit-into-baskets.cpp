class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maximum = 1;
        int s = 0;
        map<int,int> basket;
        for(int i = 0; i < fruits.size(); ++i){
            basket[fruits[i]]++;
            while(basket.size() > 2){
                basket[fruits[s]]--;
                if(basket[fruits[s]]==0) basket.erase(fruits[s]);
                s++;
            }
            maximum = max(maximum, i - s + 1);
        }
        return maximum;
    }
};