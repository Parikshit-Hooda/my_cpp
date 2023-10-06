class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int c0=0,c1=0;
        for(auto ch: s) {
            if(ch == '0') c0++;
            else c1++;
        }
        // cout << c0 << " " << c1 << endl;
        //for(c1 - 1) times, swap every 0 with 1 from left
        //place last 1 at the end
        string res="";
        int lastidx = s.size()-1;
        
        
        // string ones(c1-1, '1');
        // string zeros(c0, '0');
        // res = ones + zeros + '1';
        
        // for(int i = 0 ; i < s.size(); i++) {
            while(c1>1) {res = res + '1'; c1--;}
            while(c0--) { res = res + '0'; }
            res = res + '1';
        // }
        
        // for(int i = 0; i < res.size(); i++) {
        //     while(c1>0) {
        //         if(res[i] == '0') {c1--; res[i] = '1';}
        //         else c0--;
        //     }
        //     while(c0) {
        //         c0--; res[i] = '0';
        //     }
        //     res[lastidx] = '1';
        // }
        
        return res;
    }
};