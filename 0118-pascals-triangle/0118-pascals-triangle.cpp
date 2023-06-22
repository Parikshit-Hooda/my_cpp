class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        if(numRows == 1) {
            res.push_back( {1} );
            return res;
        } //base case handled
        
        res.push_back( {1} );
        for(int i = 2; i <= numRows ; i++) {
            vector<int> newvec; //ok
            vector<int> lastvec = res[i-2]; //ok
            newvec.push_back(1);
            //loop for i-2 times
            for(int j = 1; j <= i-2; j++) {
               newvec.push_back(lastvec[j-1] + lastvec[j]); 
            }
            newvec.push_back(1);
            
            res.push_back(newvec);
        }
        
        
        return res;
        
    }
};