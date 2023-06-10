class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool res = false;
        int fsize = flowerbed.size();
        int cnt = 0;
        
        if(flowerbed.size() ==1) {
            if(flowerbed[0] == 0) {
                if(n > 1) return false;
                return true;
            } else {
                if(n > 0) return false;
                return true;
            } 
        }
        
        if(flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1; cnt++;
        }
        if(flowerbed[fsize-1] == 0 && flowerbed[fsize-2] == 0) {
            flowerbed[fsize-1] = 1; cnt++;
        }
        
        for(int i = 1; i < flowerbed.size()-1; i++) {
            if(cnt >= n) break;
            
            if(flowerbed[i] == 0) {
                //check surroundings
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                    flowerbed[i]=1,cnt++;
                }
            }
            
            
        }
        
        if(cnt>=n) res = true;
        
        return res;
        
    }
};