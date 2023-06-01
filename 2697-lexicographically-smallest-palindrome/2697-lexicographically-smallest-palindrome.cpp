class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int l = 0, r = s.size()-1;
        string t = s;
        while(l < r) {
            
            if(t[l] != t[r]) {
                if(t[l] <= t[r]) t[r] = t[l];
                else t[l] = t[r];
            } 
            l++;r--;
            
        }//while
        
        
        return t;
        
    }
};