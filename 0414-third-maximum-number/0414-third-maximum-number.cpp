class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int n= nums.size();
        
        pair<int, int>fm= {INT_MIN, -1};
        pair<int, int>sm= {INT_MIN, -1};
        pair<int, int>tm= {INT_MIN, -1};
        
        for(int i=0; i<n; i++)
        {
            if(nums[i]>fm.first||(nums[i]==INT_MIN&&fm.second==-1))
            {
                if(sm.second!=-1)
                {
                    tm.first= sm.first;
                    tm.second=1;
                }
                if(fm.second!=-1)
                {
                    sm.first= fm.first;
                    sm.second=1;
                }
                fm.first= nums[i];
                fm.second=1;
            }
            if(fm.first==nums[i])
            {
                continue;
            }
            else if(nums[i]>sm.first||(nums[i]==INT_MIN&&sm.second==-1))
            {
                if(sm.second!=-1)
                {
                    tm= sm;
                    tm.second=1;
                }
                sm.first= nums[i];
                sm.second=1;
            }
            if(sm.first==nums[i])
            {
                continue;
            }
            else if(nums[i]>tm.first||(nums[i]==INT_MIN&&tm.second==-1))
            {
                tm.first= nums[i];
                tm.second= 1;
            }
        }
        if(tm.second==-1) return fm.first;
        
        return tm.first;
    }
};
