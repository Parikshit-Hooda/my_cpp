class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        
        set<pair<int,int>> pts;
        
        for(int i = 0 ; i < circles.size(); i++) {
            vector<int> cc = circles[i];
            //count points
            int xi = cc[0], yi = cc[1], ri = cc[2];
            
            //find top-left point and form an encompassing matrix, count ele with x2 + y2 <= r2
            int tlx = xi-ri, tly = yi+ri;
            
            for(int x = tlx; x <= tlx + 2*ri; x++) {
                for(int y = tly; y >= tly - 2*ri; y--) {
                    //check x2 + y2 <= r2
                    pair<int,int> pt;
                    
                    if (pow(xi-x,2) + pow(yi-y,2) <= pow(ri,2)) {
                        pts.insert({x,y});
                    }
                    
                    // if( ( ((xi-x)^(xi-x)) + ((yi-y)^(yi-y)) ) <= ri^ri) {
                    //     pts.insert(x,y);
                    // }
                }
            }
            
        }
        
        
        return pts.size();
    }
};