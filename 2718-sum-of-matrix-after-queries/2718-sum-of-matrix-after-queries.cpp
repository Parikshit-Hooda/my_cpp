class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& q) {
        long long totalSum = 0, cNo = 0, rNo = 0;
        unordered_set<int> r, c;
        for(int indx = q.size()-1; indx > - 1 ; indx--){
            auto qs = q[indx];
            if(!qs[0] && r.find(qs[1]) == r.end()){
                r.insert(qs[1]);
                rNo++;
               totalSum += (qs[2] * (n-cNo));
      
            }else if(qs[0] && c.find(qs[1]) == c.end()){
                c.insert(qs[1]);
                cNo++;
               totalSum += (qs[2] * (n- rNo));
            }
            
        }
        return totalSum;
     
    }
};