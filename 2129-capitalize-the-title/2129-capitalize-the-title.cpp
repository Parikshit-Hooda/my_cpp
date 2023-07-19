class Solution {
public:
    
    void processWord(string &curr, string &res) {
        if(curr.size() < 3) {
            for(auto ch: curr) {
                ch = tolower(ch);
               res = res + ch; 
            }
        } else {
            char curr0 = toupper(curr[0]);
            res = res + curr0;
              for(int i = 1; i < curr.size(); i++) {
                  char ch = curr[i];
                  ch = tolower(ch);
               res = res +  ch;
            }          
        }
        
        return ;
    }
    
    string capitalizeTitle(string title) {
        
        string res = "";
        
        string curr = "";
        
        for(int i = 0; i < title.size(); i++) {
            if(title[i] == ' ') {
                //create curr
                processWord(curr, res);
                curr = "";
                res = res + ' ';
            } else {
                curr = curr + title[i];
            }
        }
                processWord(curr, res);
        
        return res;
        
    }
};