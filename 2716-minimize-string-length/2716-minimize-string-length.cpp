class Solution {
public:
    int minimizedStringLength(string s) {
        vector<bool> v(26,0);
        int ans = 0;
        for(auto &i: s){
            if(!v[i-'a']){
                ans++;
                v[i-'a'] = true;
            }
        }
        return ans;
    }
};