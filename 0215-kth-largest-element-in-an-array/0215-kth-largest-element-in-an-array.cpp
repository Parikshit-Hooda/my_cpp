class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>min_h;
        for(int i=0;i<nums.size();i++)
        {
            min_h.push(nums[i]);
            if(min_h.size()>k)
            min_h.pop();
        }
        return min_h.top();
    }
};