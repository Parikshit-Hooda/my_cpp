class Solution {
public:
    
    string capitalizeTitle(string title) {
        vector<string> words;
        stringstream ss(title);
        string word;

        while (ss >> word) {
            if (word.length() <= 2) {
                for (char& c : word) {
                    c = tolower(c);
                }
            } else {
                word[0] = toupper(word[0]);
                for (size_t i = 1; i < word.length(); ++i) {
                    word[i] = tolower(word[i]);
                }
            }
            words.push_back(word);
        }

        string capitalized_title;
        for (const auto& w : words) {
            capitalized_title += w + " ";
        }

        // Remove the extra space at the end
        if (!capitalized_title.empty()) {
            capitalized_title.pop_back();
        }

        return capitalized_title;
    }
    
//     void processWord(string &curr, string &res) {
//         if(curr.size() < 3) {
//             for(auto ch: curr) {
//                 ch = tolower(ch);
//                res = res + ch; 
//             }
//         } else {
//             char curr0 = toupper(curr[0]);
//             res = res + curr0;
//               for(int i = 1; i < curr.size(); i++) {
//                   char ch = curr[i];
//                   ch = tolower(ch);
//                res = res +  ch;
//             }          
//         }
        
//         return ;
//     }
    
//     string capitalizeTitle(string title) {
        
//         string res = "";
        
//         string curr = "";
        
//         for(int i = 0; i < title.size(); i++) {
//             if(title[i] == ' ') {
//                 //create curr
//                 processWord(curr, res);
//                 curr = "";
//                 res = res + ' ';
//             } else {
//                 curr = curr + title[i];
//             }
//         }
//                 processWord(curr, res);
        
//         return res;
        
//     }
};