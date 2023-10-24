class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        int minsum = INT_MAX;
        
        if(nums.size() < 3) return INT_MIN;
        
        for(int i = 0; i < nums.size()-2; i++) {
            for(int j = i+1; j < nums.size()-1; j++) {
                for(int k = j+1; k < nums.size(); k++) {
                    if((nums[i] < nums[j]) && (nums[k] < nums[j])) {
                        minsum = min(minsum, nums[i]+nums[j]+nums[k]);
                        
                    }
                }
            }
        }
        
        return (minsum==INT_MAX) ? -1 : minsum;
        
    }
};