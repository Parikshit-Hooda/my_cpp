class Solution {
public:
    
    vector<string> getwords(string sentence) {
        vector<string> res;
        int s = 0, e = 0;
        for(; e < sentence.size(); e++) {
            if(sentence[e] == ' ') {
                string word = sentence.substr(s,e-s);
                res.push_back(word);
                s = e+1;
            }
        }
        res.push_back(sentence.substr(s,e-s));
        
        return res;
    }
    
    string getAs(int num) {
        string longAString = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
        return longAString.substr(0,num);
    }
    
    string toGoatLatin(string sentence) {
        string res = "";
        
        //for each word in sentence,
            //find if vowel or consonant
            //construct new word
        vector<string> words = getwords(sentence);
        for(auto word: words) cout << word <<" " ; //good
        //cout << endl;
        int numAs = 1;
        for(string word: words) {
            
            string astring = getAs(numAs);
            
            if(word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' || word[0] == 'A' || word[0] == 'E' || word[0] == 'I' || word[0] == 'O' || word[0] == 'U') {
                res = res + word + "ma" + astring;
            } //if vowel
            else {
                res = res + word.substr(1, word.size()-1) + word[0] + "ma" + astring;
                
            } //consonant
            
            res = res + ' ';
            numAs++;
            cout <<"currres " << res << endl;
        }//for word in words
        res = res.substr(0, res.size()-1);
        
        return res;
        
    }
};