class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> map;
        set<char> set;
        int n = s.size()-1;
        while(n>=0){
            if(map.count(s[n]) && map[s[n]] != t[n]){
                return false;
            }
            if( !map.count(s[n]) && set.count(t[n])){
                return false;
            }
            set.insert(t[n]);
            map[s[n]]=t[n];
            n--;
        }
        return true;
    }
};