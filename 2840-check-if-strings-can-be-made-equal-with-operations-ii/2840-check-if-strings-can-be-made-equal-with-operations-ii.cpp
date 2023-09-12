class Solution {
public:
    
    string construct(string s1, int oddoreven) {
        string s = "";
        
        if(oddoreven) { // - 1 or 0
            //pick odd = 1
            for(auto i = 0; i < s1.size(); i++) {
                if(i%2) s += s1[i];
            }
        } else {
            //pick even
            for(auto i = 0; i < s1.size(); i++) {
                if(i%2 == 0) s += s1[i];
                
            }
        }
            
        return s;
    }
    
    bool checkStrings(string s1, string s2) {
        
        string s1oddidx, s1evenidx, s2oddidx, s2evenidx;
        
        s1oddidx = construct(s1, 1);
        s1evenidx = construct(s1, 0);
        s2evenidx = construct(s2, 0);
        s2oddidx = construct(s2, 1);
        
        sort(s1oddidx.begin(), s1oddidx.end());
        sort(s1evenidx.begin(), s1evenidx.end());
        sort(s2oddidx.begin(), s2oddidx.end());
        sort(s2evenidx.begin(), s2evenidx.end());
        
        cout << s1oddidx << " " << s1evenidx << " " << s2evenidx << " " << s2oddidx << endl;
        
        if((s1oddidx == s2oddidx) && (s1evenidx == s2evenidx)) return true;
        return false;
        
    }
};