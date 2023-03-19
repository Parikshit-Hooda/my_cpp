class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> seen(size(nums)+1);
        vector<int> ans;
        for(auto c : nums) seen[c] = true;
        for(int i = 1; i <= size(nums); i++)
            if(!seen[i]) ans.push_back(i);
        return ans;
    }
};
