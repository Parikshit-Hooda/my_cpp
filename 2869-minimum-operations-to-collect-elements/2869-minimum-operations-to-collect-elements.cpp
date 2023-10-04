class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        int i = nums.size()-1; int counted = 0;
        vector<int> cnt(k+1, 0);
        for(; i >= 0; i--) {
            if(nums[i] >= 1 && nums[i] <= k) {
                if(cnt[nums[i]] == 0) { cnt[nums[i]]++; counted++;}
                if(counted == k) break;
            }
        
        }
        
       ans = nums.size() - (i);
        return ans;
    }
};