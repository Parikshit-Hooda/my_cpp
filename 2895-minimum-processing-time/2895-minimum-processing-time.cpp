class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        
        int maxx = 0;
        int minn = 0;
        
        sort(tasks.begin(), tasks.end());
        
        sort(processorTime.begin(), processorTime.end());
        
        for(int i = 0; i < tasks.size(); i = i+4 ) {
            maxx=0;
            int aligned = ((tasks.size() - 1 - i)/4); //aligned processor index
            maxx = max(processorTime[aligned] + tasks[i], maxx);
            maxx = max(processorTime[aligned] + tasks[i+1], maxx);
            maxx = max(processorTime[aligned] + tasks[i+2], maxx);
            maxx = max(processorTime[aligned] + tasks[i+3], maxx);
            cout << maxx << " ";
            minn = max(minn, maxx);
            
        }
        
        return (minn);
    }
};