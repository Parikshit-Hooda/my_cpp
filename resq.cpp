#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    int n;
    cin>>n;
    int minDiff = INT_MAX;
    for(int i = 1 ; i <= n/2 ; i++) {
        if(n%i == 0) {
            int sec_fact = n/i;
            if(abs(i-sec_fact) < minDiff) {
                minDiff = abs(i-sec_fact);
            }
        }
    }
    cout<<minDiff<<endl;

}

return 0;
}
