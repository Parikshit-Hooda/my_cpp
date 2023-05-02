class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int er = k % nums.size();
        //move right er times
        vector<int> rightpart(nums.begin() + nums.size()-er, nums.end());
        // for(auto ele: rightpart) cout << ele << " ";
        //move everything to right from starting till nums.size()-er;
        vector<int> leftpart(nums.begin(), nums.begin() + nums.size()-er);
        // for(auto ele: leftpart) cout << ele << " ";
        int i = 0;
        for(auto ele: rightpart) nums[i++] = ele;
        for(auto ele: leftpart) nums[i++] = ele;
        
        return ;
    }
};