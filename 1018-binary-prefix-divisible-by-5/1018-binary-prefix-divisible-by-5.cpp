class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
       vector<bool>v;
        
        int sum=0;
        
        for(auto x : nums){
            
            sum=(sum*2+x)%5;
            
            v.push_back(sum==0);
        }
        
        return v;
    }
};