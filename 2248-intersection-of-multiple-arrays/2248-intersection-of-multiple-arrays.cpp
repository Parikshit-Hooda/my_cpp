class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> freq(1001, 0);
        
        for(auto i = 0; i < nums.size(); i++) {
            for(auto j = 0; j < nums[i].size(); j++) {
                freq[nums[i][j]]++;
            }
        }
        
        // for(auto ele: freq) cout << ele << " ";
        // cout << endl;
        // cout <<"ends";
        
        vector<int> ans;
        
        int maxcnt = nums.size();
        
        for(auto i = 1; i < freq.size(); i++) {
            if(freq[i]  == maxcnt) ans.push_back(i);
        }
        
        return ans;
    }
};