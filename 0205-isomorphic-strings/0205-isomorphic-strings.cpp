class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        vector<int> v(26, 0);
        bool res = true;
        if(s.size() != t.size()) return false;
        
        for(int i = 0; i < s.size(); i++) {
            int currs = s[i], currt = t[i];
            //trace back for difference
            for(int j = i-1; j >= 0; j--) {
                if(s[j] == currs || t[j] == currt) 
                    { 
                        if(t[j] != currt || s[j] != currs) {res = false; break;}
                    }
            }
            
        }
        
        return res;
        
    }
};