class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        if(s.size()== 0) return {0};
        
        int lowavailable = 0, highavailable = s.size();
        vector<int> res;
        
        for(auto ch: s) {
            if(ch == 'I') res.push_back(lowavailable), lowavailable++;
            else
                res.push_back(highavailable), highavailable--;
        } 
        res.push_back(lowavailable);
        return res;
        
    }
};