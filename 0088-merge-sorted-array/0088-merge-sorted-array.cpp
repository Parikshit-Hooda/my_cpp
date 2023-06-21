class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        //in nums1, start from index m, and copy entire num2
        for(int i = m; i < m+n; i++) {
            nums1[i] = nums2[i-m];
        }
        
        sort(nums1.begin(), nums1.end());
        
    }
};