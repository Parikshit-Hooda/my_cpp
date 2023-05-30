class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //linear traversal with hashmap
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) {
            auto ele = nums[i];
            if(mp.find(target-ele) != mp.end()) {
                return {mp[target-ele], i};
            }
            mp[ele] = i;
        }
        return {0,0};
    }
};