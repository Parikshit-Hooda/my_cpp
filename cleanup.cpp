#include <bits/stdc++.h>
using namespace std;
int main(void) {
int t;
cin>>t;
while(t--) {
    int n,m;
    cin>>n>>m;
    int *arr = new int[n]();
    while(m--) {
        int temp;
        cin>>temp;
        arr[temp-1] = 1;
    }
    for(int k = 0 ; k < n ; k+2) {
        if(arr[k]==0)
            cout<<k+1<<" ";
    }
    cout<<endl;
    for(int k = 1 ; k < n ; k+2) {
        if(arr[k]==0)
            cout<<k+1<<" ";
    }
    cout<<endl;
}
return 0;
}
