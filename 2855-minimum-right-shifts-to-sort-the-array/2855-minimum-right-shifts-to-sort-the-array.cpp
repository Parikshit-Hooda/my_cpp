class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
         int ind=0;
        int n=nums.size();
        while(ind+1<n&&nums[ind]<nums[ind+1])ind++;
        
        if(ind==n-1)return 0;
        
        ind++;
        int pivot=ind;
       while(ind+1<n&&nums[ind]<nums[ind+1])ind++;
        if(ind!=n-1)return -1;
        if(nums[pivot]<nums[0]&&nums[n-1]<nums[0])
        {
            return n-pivot;
        }
        else return -1;
        
        
    }
};