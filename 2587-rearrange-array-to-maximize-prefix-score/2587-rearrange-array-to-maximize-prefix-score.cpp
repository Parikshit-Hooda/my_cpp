class Solution {
public:
    int maxScore(vector<int>& nums) {
        vector<int> prefix(nums.size(), 0);
        sort(nums.begin(), nums.end(), greater<>());
        int ans=0;
        long long curr = nums[0];
        if (curr <= 0) return ans;
        ans++;
        for(int i = 1; i < nums.size(); i++) {
            curr += nums[i];
            if(curr > 0) ans++;
        }
        
        return ans;
    }
};