class Solution {
public:
    bool isSubstringPresent(string s) {
        
        map<string, bool> mp;
        
        if(s.size() < 2) return false;
        
        for(int i = 0 ; i < s.size()-1; i++) {
            //find if reverse present in map
            // string reverse = s;
            string curr = s.substr(i,2);
            string rev = curr;
            reverse(rev.rbegin(), rev.rend());
            
            // cout <<"curr " << curr << " "<< rev << endl;
            if(curr == rev) return true;
            if(mp.find(rev) != mp.end()) return true;
            mp[curr] = true;
         }
        
        return false;
    }
};