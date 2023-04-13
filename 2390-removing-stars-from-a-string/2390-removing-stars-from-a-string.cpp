class Solution {
public:
    string removeStars(string s) {
        //2 pointer
        
        
        
        //below one gets TLE
        stack<char> stk;
        
        for(auto ch: s) {
            if(ch == '*') {
                //pop from stack stk
                stk.pop();
            } else {
                stk.push(ch);
            }
        }
        string res = "";
        int stksize = stk.size();
        vector<char> vec(stksize, ' ');
        int i = 0;
        while(!stk.empty()) {
            vec[i++] = stk.top(); stk.pop(); 
        }
        reverse(vec.begin(), vec.end());
        string str(vec.begin(), vec.end()); 
        // reverse(str.begin(), str.end());
        
        return str;
        // while(!stk.empty()) {
        //     res = stk.top() + res;
        //     stk.pop();
        // }
        
        
//         return res;
     }
};