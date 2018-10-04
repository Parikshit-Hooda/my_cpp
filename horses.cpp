#include <bits/stdc++.h>
using namespace std;
int main() {
int t,n;
cin>>t;
while(t--) {
    cin>>n;
    int *arr = new int[n]();
    for(int i = 0 ; i < n ; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int smallestDiff = arr[1] - arr[0];
    for(int j = 1 ; j < n-1 ; j++) {
        if(arr[j+1]-arr[j] < smallestDiff)
            smallestDiff = arr[j+1]-arr[j];
    }
    cout<<smallestDiff<<endl;
}
return 0;
}
