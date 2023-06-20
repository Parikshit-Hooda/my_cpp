class Solution {
public:
    
    void reverseNums(vector<int> &nums, int lidx, int ridx) {
        if(ridx < 0 || lidx < 0) return ;
        int l = lidx, r = ridx;
        
        while(l < r && r >= 0) {
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;r--;
        }
        return ;
    }
    
    void rotate(vector<int>& nums, int k) {
        //1. create a new array and return it
        //2. copy the k-bit part of array, rotate the original array, paste back the remaining half
        //3. one by one rotate the array k-times
        //4. O(1) extra space
        
        // 1 2 3 4 5 6 , k = 4, ans = 3 4 5 6 1 2
        
        int currk = k;
        if(currk == 0) return ;
        currk = currk%nums.size(); //gives effective rotations
        //approach - first block. 0 to size-k-1. second block. size-k to size-1
        reverseNums(nums, 0, nums.size()-1-currk);
        reverseNums(nums, nums.size()-currk, nums.size()-1);
        reverseNums(nums, 0, nums.size()-1);
        
    }
};