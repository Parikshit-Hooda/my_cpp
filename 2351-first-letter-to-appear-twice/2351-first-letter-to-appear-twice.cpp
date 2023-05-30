class Solution {
public:
    char repeatedCharacter(string s) {
     vector<int> counts(26,0);
        for(auto ch: s) {
            if(counts[ch-'a'] > 0) return ch;
            counts[ch-'a']++;
        }
        
        return 'a';
    }
};