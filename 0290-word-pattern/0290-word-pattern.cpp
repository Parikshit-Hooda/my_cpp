class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>arr;
        string temp="";
        int i=0;
        while(i<s.length()){
            if(s[i]==' '){
                arr.push_back(temp);
                temp="";
                
            }
            else{
                temp += s[i];
            }
            i++;
        }
        arr.push_back(temp);
        if(pattern.length()!=arr.size()){
            return false;
        }
        
        map<char,string>m;
        set<string>str;
        for(int i=0;i<pattern.length();i++){
            if(m.find(pattern[i])!=m.end()){
                if(m[pattern[i]]!=arr[i]){
                return false;
            }
            }
            else{
                    if(str.find(arr[i])!=str.end()){
                        return false;
                    }
                    m[pattern[i]]=arr[i];
                    str.insert(arr[i]);
            }

        }
        return true;
    }
};