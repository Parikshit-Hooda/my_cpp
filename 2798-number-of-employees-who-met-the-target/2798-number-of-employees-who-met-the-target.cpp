class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt = 0;
        
        
        for(auto hour: hours) {
            if(hour >= target) cnt++;
         }
        
        return cnt;
        
    }
};