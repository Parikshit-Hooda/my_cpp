class Solution {
public:
    int minimizedStringLength(string s) {
        
        set<char> st;
        for(auto ele: s) st.insert(ele);
        return st.size();
        
    }
};