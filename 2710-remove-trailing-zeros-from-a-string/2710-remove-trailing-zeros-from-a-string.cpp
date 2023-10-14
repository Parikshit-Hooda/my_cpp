class Solution {
public:
    string removeTrailingZeros(string num) {
        
        
        for(int i = num.size()-1; i >= 0; i--) {
            if(num[i] == '0') num.erase(i,1);
            else break;
        }
        
        return num;
    }
};