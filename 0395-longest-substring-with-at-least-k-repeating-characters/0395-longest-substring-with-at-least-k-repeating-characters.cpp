class Solution {
public:
    int longestSubstring(string s, int k) {
     //inserting frequency of all characters in map   
     unordered_map<char,int>mp;
    for(auto &it:s)
    {
        mp[it]++;
    }
    
        int ind=0;
        //first index of character which has frequency less than k
        while(ind<s.size()&&mp[s[ind]]>=k)
            ind++;
        
        if(ind==s.size())
            return s.size();
        //ans must be in the left part or right part 
        int left= longestSubstring(s.substr(0,ind),k) ;
        int right= longestSubstring(s.substr(ind+1),k);
        return max(left,right);
        
        
    }
};