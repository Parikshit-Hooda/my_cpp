class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> st;
        for(auto op: operations) {
            if(op == "+") {
                //record 
                string top1 = st.top(); 
                st.pop();
                string top2 = st.top();
                string newtop = to_string(stoi(top1) + stoi(top2));
                st.push(top1); st.push(newtop);
            } else if(op == "D") {
                string newtop = to_string(stoi(st.top())*2);
                st.push(newtop);
            } else if(op == "C") {
                st.pop();
            } else {
                st.push(op);
            }
        }
        
        int sum = 0;
        while(!st.empty()) {
            string stTop = st.top(); st.pop();
            sum += stoi(stTop);
        }
        
        
        return sum;
    }
};