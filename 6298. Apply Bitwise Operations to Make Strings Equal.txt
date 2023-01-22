class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        if (s == target) return true; 
        string zero = string(s.size(), '0'); 
        return s != zero && target != zero; 
    }
};
