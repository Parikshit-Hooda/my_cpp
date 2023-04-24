class Solution {
public:
    int minimumOperations(vector<int>& v) {
        sort(v.begin(), v.end());
        int uniqueCount = unique(v.begin(), v.end()) - v.begin();
        
        int cnt0s = count(v.begin(), v.end(), 0);
        return ((uniqueCount-cnt0s) < 0) ? 0 : (uniqueCount-cnt0s) ;
        // return uniqueCount;
        
        
    }
};