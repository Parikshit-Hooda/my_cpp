#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
int a,n,k;
while(t--) {
    cin>>a>>n>>k;
    int *arr = new int[k]();
    int i = 0;
    while(k && a>0) {
        arr[i++] = a%(n+1);
        a=a/(n+1);
        /*if(i>=k)
            arr[k] = 0;*/
    }
    for(int j = 0 ; j < k ; j++)
        cout<<arr[j]<<" ";
    cout<<endl;
}

}
