class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string,int> s1mp, s2mp;
        
        //create maps
        string curr = "";
        for(int i = 0 ; i < s1.size(); i++) {
            //make words
            if(s1[i] == ' ') {
                //push word
                s1mp[curr]++, curr = "";
            } else 
                curr = curr + s1[i];
            
            if(i == s1.size()-1) {
                s1mp[curr]++; curr = "";
            }
            
        }
        
        for(int i = 0 ; i < s2.size(); i++) {
            
            //make words
            if(s2[i] == ' ') {
                //push word
                s2mp[curr]++, curr = "";
            } else 
                curr = curr + s2[i];
            
            if(i == s2.size()-1) {
                s2mp[curr]++; curr = "";
            }
            
        }
        
        for(auto ele: s1mp) {
            cout << ele.first << " " << ele.second << endl;
        }
        for(auto ele: s2mp) {
            cout << ele.first << " " << ele.second << endl;
        }
        
        //iterate through each map and find uncommon words
        vector<string> res;
        
        for(auto ele: s1mp) {
            if(ele.second == 1) {
                //if not found in s2mp
                if(s2mp.find(ele.first) == s2mp.end())
                    res.push_back(ele.first);
            }
        }
        
        for(auto ele: s2mp) {
            if(ele.second == 1) {
                //if not found in s2mp
                if(s1mp.find(ele.first) == s1mp.end())
                    res.push_back(ele.first);
            }
        }
        
        return res;
    }
};