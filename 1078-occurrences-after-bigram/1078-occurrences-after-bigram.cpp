class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> words, res;
        
        string curr = "";
        for(auto ch: text) {
            if(ch == ' ') {
                words.push_back(curr);
                curr = "";
            } else {
                curr = curr + ch;
            }
        }
        if(curr != "" ) words.push_back(curr);
        
        for(auto word: words) cout << word << " ";
        
        cout <<endl;
        
        for(int i = 0; i < words.size()-2; i++) {
            string word = words[i];
            if(word == first && (words[i+1] == second)) {
                res.push_back(words[i+2]);
            }
            
            
        }
        
        
        
        return res;
        
    }
};