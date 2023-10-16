class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool ans = false;
        for(int i = 0; i < nums.size()-1; i++) {
            if(nums[i] <= nums[i+1]) continue;
            if(ans && nums[i] > nums[i+1]) return false;
            
            if(i==0 || nums[i+1] >= nums[i-1]) { nums[i] = nums[i+1]; ans=true;}
            else { nums[i+1] = nums[i];  ans=true;}
        }
        
        return true;
    }
};