#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--) {
    int n,o,carry=0,cnt=0;
    cin>>n>>o;
    while(n>0 || o>0) {
        carry = (n%10 + o%10)/10 + carry;
        if(carry>0)
            count++;
        n /= 10;
        o /= 10;
    }
}

return 0;
}
