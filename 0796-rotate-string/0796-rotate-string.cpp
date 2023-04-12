class Solution {
public:
    bool rotateString(string s, string goal) {
        string curr = s;
        
        if(s.size() != goal.size()) return false;
        bool res = false;
        for(int i = 0; i < curr.size(); i++) {
            if(goal == curr) return true;
            curr = curr[curr.size()-1] +  curr.substr(0, curr.size()-1); //last ele + plu
            cout << curr << " " ;
            cout << endl;
        }
        
        return res;
        
    }
};