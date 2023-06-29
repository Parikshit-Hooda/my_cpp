class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
    int res = INT_MIN;
        for(auto ele: nums) res = max(res,ele);
        
     int cmax=1,cmin=1;
        
      for(int i = 0; i < nums.size(); i++) {
          int curr = nums[i];
          if(curr == 0) {cmax = 1;cmin = 1; continue;}
          
          //update cmax,cmin
          int tempmax = cmax,tempmin = cmin;
          
          
          cmax = max(tempmax*curr, max(tempmin*curr, curr));
          cmin = min(tempmax*curr, min(tempmin*curr, curr));
          res = max(res,cmax);
      }  
        
        return res;
        
    }
};