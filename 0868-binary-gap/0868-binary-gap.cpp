class Solution {
public:
    int binaryGap(int n) {
        int lo = 1;
        
        int gap = 0;
        int curr = n;
        int flag = 0;
        
        while(curr > 0 ) {
            if(curr & 1 == 1) {
                //lsb is 1
                if(!flag) {flag = 1; curr = curr >> 1; continue;}
                
                gap = max(gap, lo);
                
                lo = 1;
                curr = curr >> 1;
                
            } else {
                if(!flag) {curr = curr >> 1; continue;}
                lo++;
                curr = curr >> 1;
                
            }
        
        
        }
        
        
        return gap;
    }
};