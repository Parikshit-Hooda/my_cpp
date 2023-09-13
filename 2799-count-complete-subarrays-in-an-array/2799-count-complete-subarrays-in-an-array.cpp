//works but is O(N^2), find better
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> st, st1;
        
        for(auto num: nums) st.insert(num);
        
        int distinctNums = st.size();
        
        // cout <<"d " << distinctNums << endl;
        
        vector<int> counts(2000, 0);
        
        int ans = 0;
        
         for (int i=0; i <nums.size(); i++)
        {
            // Pick ending point
             st1.insert(nums[i]);
             
            for (int j=i; j< nums.size(); j++)
            {
                st1.insert(nums[j]);
                if(distinctNums == st1.size()) ans++;

            }
             st1.clear();
        }
     
        
        return ans;
    }
};