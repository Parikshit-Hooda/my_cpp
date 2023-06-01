class Solution {
public:
    
    bool isPalindrome(string word) {
        int l = 0, r = word.size()-1;
        while(l < r) {
            if(word[l++] != word[r--]) return false;
        }
        
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        string res = "";
        
        for(auto word: words) {
            if(isPalindrome(word)) {
                res = word; 
                break;
            }
        }
     
        return res;
    }
};