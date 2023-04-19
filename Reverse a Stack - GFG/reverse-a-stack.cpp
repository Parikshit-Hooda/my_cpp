//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void util(stack<int> &s1, stack<int> &s2) {
        if(s1.empty()) return ;
        
        s2.push(s1.top()); s1.pop();
        util(s1,s2);
       // s1.push(s2.top()); s2.pop();
        s1 = s2;
        return ;
    }
    
    void Reverse(stack<int> &s1){
        stack<int> s2;
        util(s1, s2);
        return ;
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends