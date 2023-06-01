class Solution {
public:
    int countSeniors(vector<string>& details) {
     int cnt = 0;
        
        for(auto detail: details) {
            string ageString = detail.substr(11,2);
            int age = stoi(ageString);
            if(age>60) cnt++;
        }
        
        return cnt;
    }
};