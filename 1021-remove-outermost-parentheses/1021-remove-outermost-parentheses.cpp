class Solution {
public:
    string removeOuterParentheses(string s) {
        int last = s.size() - 1, balanced = 0;
        for(int i = last; i >= 0; i--) {            
            if(s[i] == ')') balanced++;
            else {
                balanced--;
                if(balanced == 0) {
                    s.erase(last,1);
                    s.erase(i, 1);
                    last = i - 1;
                }
            }
        }

        return s;
    }
};