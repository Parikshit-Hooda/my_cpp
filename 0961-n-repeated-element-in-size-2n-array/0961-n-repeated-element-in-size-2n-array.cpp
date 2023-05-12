class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

    int n=nums.size()/2;   
    int ans=0; 
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 2 * n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count == n)
        {
            ans=nums[i];
            break;
        }
    }
    return ans;


    }
};