class Solution {
public:
    string removeDigit(string s, char c) {
        // cout << stoi(number);
        // string left, right;
        string res = "0";
        //try left
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == c) {
                string temp = s;
                temp.erase(i,1);
                res = max(res, temp);
            }
        }
        
        
        
        // res = (left > right) ? left : right;
        
        //try right
        
        return res;
    }
};