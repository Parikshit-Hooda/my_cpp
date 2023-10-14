class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        
        //find minidx, maxidx, then calc
        int minidx = 0, maxidx = 0;
        
        for(int i = 0 ; i < nums.size(); i++) {
            if(nums[i] < nums[minidx]) minidx = i;
            if(nums[i] > nums[maxidx]) maxidx = i;
        }
        
        cout << minidx << "  " << maxidx << "\n";
        
        int res = minidx + (nums.size()-1-maxidx);
        if(minidx > maxidx) res--;
        if(minidx==maxidx) return 0;
        
        cout << res << "\n";
        
        return res;
    }
};