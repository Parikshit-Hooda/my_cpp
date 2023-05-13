class Solution {
public:

    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
        return ;
    }

    void sortColors(vector<int>& nums) {
        //dutch national flag problem
        int l = 0, m= 0, h = nums.size()-1;

        while(m <= h) {
            if(nums[m] == 0) {
                swap(nums[m], nums[l]); m++; l++; 
                
            } else if(nums[m] == 1) {
                m++;
            } else {
                swap(nums[m], nums[h]); h--;
            }
        
        } //while


        return ;
    }
};