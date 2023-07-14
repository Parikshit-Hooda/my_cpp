class Solution {
public:
    
    void swap(int &a, int &b) {
        int t = a;
        a = b;
        b = t;
    }
    
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        
        while(l < r) {
            if(nums[l]%2 == 1 && nums[r]%2 == 0) {
                swap(nums[l], nums[r]);
                
            }
            if(nums[l]%2 == 0) l++;
            if(nums[r]%2 == 1) r--;
            
        }
        
        return nums;
        
    }
};