class Solution {
public:
    string defangIPaddr(string address) {
       string res = "";
       for(auto ch: address) {
           if(ch != '.') res = res + ch;
           else {
               res = res + "[.]";
           }
       } 
        
        return res;
    }
};