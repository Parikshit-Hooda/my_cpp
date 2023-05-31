class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            sort(nums[i].begin(), nums[i].end());
        }
        
        // for(auto ele: nums) {
        //     for(auto e: ele) cout << e << " ";
        //     cout << endl;
        // } //good
        
        for(int i = nums[0].size()-1 ; i>= 0 ; i--) {
            //i denotes the column index
            int colmax = INT_MIN;
            for(int j = 0 ; j < nums.size() ; j++) {
                colmax = max(colmax, nums[j][i]);
            }
            cout <<"cmax " << colmax << endl;
            ans += colmax;
            // cout << ans << endl;
        }
        
        
        return ans;
    }
};