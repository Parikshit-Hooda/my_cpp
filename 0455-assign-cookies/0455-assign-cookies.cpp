class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int ans = 0;
        int s_i = 0;
        for(int i = 0; i < g.size(); i++) {
            
            while(s_i < s.size() && s[s_i] < g[i]) s_i++;
            
            if(s_i >= s.size()) break;
            
            
            if(s[s_i] >= g[i]) {
                s_i++;
                 ans++;
            }
        }
        
        return ans;
    }
};