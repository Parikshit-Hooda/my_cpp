#include <bits/stdc++.h>
using namespace std;
int main() {
int t,i,n,q,g;
cin>>t;
while(t--) {
        cin>>g;
        while(g--) {
            cin>>i>>n>>q;
            if(i%2==0) //tail facing {
                {
                    cout<<(n/2)<<endl;
                }
            else {
                if(q==1) {
                    cout<<(n/2)<<endl;
                } else if(q==2) {
                cout<<(n/2 + 1)<<endl;
                }
                }
        }
    }
return 0;
}
