class Solution {
public:

    void util(int o, int c, int n, stack<string> s, vector<string> &res) {
        if(o==c && o==n) {
            string r = "";
            while(!s.empty()) 
            {
                string c = s.top(); s.pop(); r = c + r; 
            }
            res.push_back(r);
        } //if o==c && o==n

        if(o < n) {
            s.push("("); util(o+1, c, n, s, res); s.pop(); 
        }
        if(c < o) {
            s.push(")"); util(o, c+1, n, s, res); s.pop(); 
        }
        return ;
    } 

    vector<string> generateParenthesis(int n) {
        //concept of catalan number in case of counting number of generated parentheses
        stack<string> stk;
        vector<string> res;
        util(0,0,n,stk,res);
        return res;

    }
};