#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    int n;
    cin>>n;
    int temp;
    int sum=0;
int k = n;
    while(k--) {
        cin>>temp;
        sum+=temp;
    }
    if((n*(n+1)/2) == sum)
       cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
}

return 0;
}
