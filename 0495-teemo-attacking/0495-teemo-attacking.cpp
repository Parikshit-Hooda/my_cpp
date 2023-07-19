class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        int ans = 0;
        
        for(int i = 0; i < timeSeries.size(); i++) {
            ans += duration;
            
            if(i != 0) {
                if(timeSeries[i] - timeSeries[i-1] <= duration) {
                    int diff = timeSeries[i] - timeSeries[i-1];
                    ans -= (duration - diff);
                }
            }
            
        }
        
        return ans;
        
    }
};