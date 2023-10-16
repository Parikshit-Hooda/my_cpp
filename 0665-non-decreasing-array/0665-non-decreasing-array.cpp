class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
    int ans=0,pre=INT_MIN,curr=nums[0];
    int n = nums.size();
    for(int i=0;i<n-1;i++)

    {

        if(nums[i+1]>=curr)

        {

            pre=curr;curr=nums[i+1];

        }

        else{

            ans++;

            if(nums[i+1]>=pre){

                curr=nums[i+1];

            }

        }

        if(ans>1)

            return false;

    }

    return true;
        
    }
};