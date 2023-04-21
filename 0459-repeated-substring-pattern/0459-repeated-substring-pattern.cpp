class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //can afford anything less than equal to O(N2)
        //have to append atleast one copy of curr
        bool res = false;
        for(int i = 0; i < s.size()/2; i++) {
            //make curr substring from 0 to i;
            string curr = s.substr(0, i+1);
            //from i+1 to last index,  try recurring pattern search
            //cout <<"cstr " << curr << endl;
            int curridx = 0;
            int j = i+1;
            for(; j < s.size(); j++) {
                if(curr[curridx] != s[j]) {
                    break;
                }
                curridx++;
                    curridx %= curr.size();
                
            }
            int temp = s.size() - i - 1;
            if(j == s.size() && temp%(curr.size())==0) { res = true; break;}
            
        }
        
        return res;
    }
};