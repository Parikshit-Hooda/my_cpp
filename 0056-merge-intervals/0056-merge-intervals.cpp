class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> result;
        
        if(intervals.size() == 0) return result;
        if(intervals.size() == 1) return intervals;
        
        //sort the intervals
        sort(intervals.begin(), intervals.end());
        
        result.push_back(intervals[0]);
        for(int idx = 0 ; idx < intervals.size(); idx++) {
            vector<int> merge_intervals = result[result.size()-1];
            vector<int> curr = intervals[idx];
            
            if(merge_intervals[1] >= curr[0]) {
                merge_intervals[1] = max(merge_intervals[1], curr[1]);
                result[result.size()-1] = merge_intervals;
            } else {
                result.push_back(intervals[idx]);
            }   
        }
        
        
        
        return result;
    }
};