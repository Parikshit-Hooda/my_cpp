class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        
        int gmin = INT_MAX;
        int s = 0, e = 0, cw = 0, cs = 0;
        
        for(; e < blocks.size(); e++) {
            
            if(blocks[e] == 'W') {
                cw++;
            } else cs++;
            
            
            if( e + 1 >= k) {
                
                if(cw < gmin) { gmin = min(gmin, cw); }
                
                if(blocks[s] == 'W') cw--;
                s++;
                
            }
            
            
        }//fore
        
        return gmin;
    }
};