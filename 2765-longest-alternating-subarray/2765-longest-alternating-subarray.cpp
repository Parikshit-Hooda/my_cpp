class Solution {
public:
    
    int count(vector<int> &nums, int i) {
        int len=1;
        int flag=0;
        for(auto j = i ; j < nums.size()-1; j++) {
            
            if(!flag) {
                if(nums[j] + 1 == nums[j+1]) len++;
                else break;
                flag++;
            } else {
                if(nums[j] - 1 == nums[j+1]) len++;
                else break;
                flag--;
            }
            
        }
        
        if(len > 1) return len;
        return 0;
    }
    
    int alternatingSubarray(vector<int>& nums) {
        
        int ans = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++) {
            int c = count(nums,i);
            ans = max(ans,c);
        }
        
        if(ans > 0) return ans;
        return -1;
    }
};