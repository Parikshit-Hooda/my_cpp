class Solution {
public:
    
    string swap(string s1, int a, int b) {
        string s = s1;
        char ch_a = s[a];
        s[a] = s[b];
        s[b] = ch_a;
        return s;
    }
    
    bool canBeEqual(string s1, string s2) {
        
        bool ans = false;
        
        if(s1==s2) ans = true;
        string s11 = swap(s1,2,0), s12 = swap(s1, 3,1);
        string s21 = swap(s2,2,0), s22 = swap(s2, 3,1);

        
        cout << s1 << " " << s11 << " " << s12 << " " << s2 << " " << s21 << " " << s22 << endl;
        
        if(s1 == s21 || s1 == s22) ans = true;
        if(s11 == s21 || s11 == s22) ans = true;
        if(s12 == s21 || s12 == s22) ans = true;
        
        
        
        return ans;
    }
};