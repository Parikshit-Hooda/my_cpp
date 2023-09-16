class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lc=0,rc=0,bc=0;
        
        for(auto move: moves) {
            if(move == 'L') lc++;
            else if(move == 'R') rc++;
            else bc++;
        }
        
        return abs(lc-rc)+bc;
        
        
    }
};