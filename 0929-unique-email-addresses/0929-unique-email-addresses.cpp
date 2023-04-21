class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        
        for(auto email: emails) {
            
            int suffixstart = email.find('@');
            string suffix = email.substr(suffixstart);
            
            ///string prefix;
            //find prefix
            vector<char> v(suffixstart+1, '0');
            int cnt = 0;
            for(int i = 0; i < suffixstart; i++) {
                auto ele = email[i];
                if(ele == '+') break;
                else if(ele == '.') continue;
                else v[cnt++] = ele;
            }
            
             string prefix(v.begin(), v.begin()+cnt);
            
          //  cout << prefix <<" ";
            
            st.insert(prefix+suffix);

           // cout << suffix << endl;
        }
        
        return st.size();
        
    }
};