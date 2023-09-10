class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        vector<int> numline(101, 0);
        int ans = 0;
        
        for(auto num: nums) {
            int s = num[0], e = num[1];
            for(auto i = s; i <= e; i++) {
                numline[i]++;
            }
            
        }
        
        for(auto i: numline) {
            if(i) ans++;
        }
        
        return ans;
    }
};