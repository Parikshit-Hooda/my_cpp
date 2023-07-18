class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evencnt = 0, oddcnt = 0;
        
        for(auto idx: position) {
            if(idx%2 == 0) oddcnt++;
            else evencnt++;
        }
        
        return min(evencnt, oddcnt);
        
        
    }
};