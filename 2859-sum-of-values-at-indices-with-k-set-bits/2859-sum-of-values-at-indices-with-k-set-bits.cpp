class Solution {
public:
    
    bool countSetBits(int ele, int k) {
        // cout << ele << " ";
        int c=0;
        
        while(ele > 0) {
            
            if(ele & 1) c++;
            ele = ele>>1;
        }
        
        // cout << c << endl;
        
        if(k==c) return true;
        return false;
    }
    
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
               int ans = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            bool flag = countSetBits(i, k);
            cout << flag <<" " << i << endl;
            if(flag) ans += nums[i];
            
        }
        
        return ans; 
    }
};