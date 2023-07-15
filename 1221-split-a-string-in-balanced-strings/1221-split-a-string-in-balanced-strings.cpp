class Solution {
public:
    int balancedStringSplit(string s) {
        
        int ans = 0;
        int flag = 0; int cnt = 0;
        
        for(int i = 0; i < s.size(); i++) {
            
            if(s[i] == 'R') cnt--;
            else if(s[i] == 'L') cnt++;
            
            if(flag == 0 && cnt == 0) {flag = 1;}
            
            if(flag != 0 && cnt == 0) {
                ans++;
            }
            
        }
        
        return ans;
    }
};