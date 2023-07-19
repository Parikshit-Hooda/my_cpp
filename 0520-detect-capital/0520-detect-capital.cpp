class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool ans;
        int cntCap = 0, cntNotCap = 0;
        for(auto ch: word) {
            if(ch >= 'A' && ch <= 'Z') {
                cntCap++;
            } else {
                cntNotCap++;
            }
        }
        
        if(cntCap == word.size()) return true;
        if(cntNotCap == word.size()) return true;
        if(cntCap == 1 && isupper(word[0])) return true;
        return false;
        
    }
};