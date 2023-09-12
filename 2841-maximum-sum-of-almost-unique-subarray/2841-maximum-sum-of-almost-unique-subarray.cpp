class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        
        if(nums.size() < k) return 0;
        
        long long sum = INT_MIN, csum=0;
        unordered_map<int,int> mp;
        int s=0,e=0;
        
        for(; e < nums.size(); e++) {
            csum += nums[e];
            mp[nums[e]]++;
            if((e-s+1 == k) ) {
                
                if(mp.size() >= m)
                {
                    sum = max(sum,csum);  
                }   
//                 if(mp.size() > m) {
//                     //shrink window
//                     int sele = nums[e];

//                     while( (s <= e) ) {
//                         mp[nums[s]]--;
//                         if(mp[nums[s]] == 0) mp.erase(mp[nums[s]]);
//                         csum -= nums[s];
//                         s++;
//                         if(mp.size() <= m) break;
//                     }

//                 }                
                
                //shrink map
                mp[nums[s]]--;
                if(mp[nums[s]] == 0) mp.erase(nums[s]);
                
                csum -= nums[s];                
                s++;
            }

            
        }//e
        
        if(sum == INT_MIN) return 0;
        return sum;
    }
};