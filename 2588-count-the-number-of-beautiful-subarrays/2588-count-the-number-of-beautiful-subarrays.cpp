class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long int ans = 0,x=0;
        unordered_map<long long int,long long int> mp;
        mp[0]++;
        for(auto &i: nums){
            x ^= i;
            if(mp.count(x)){
                ans += mp[x];
            }
            mp[x]++;
        }
        return ans;
    }
};