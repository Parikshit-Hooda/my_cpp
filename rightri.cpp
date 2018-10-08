#include <bits/stdc++.h>
using namespace std;
int main() {
int t,x1,y1,x2,y2,x3,y3, count=0;
cin>>t;
while(t--) {
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double s1 = pow(x2-x1,2) + pow(y2-y1,2);
    //cout<<s1;
    double s2 = pow(x3-x2,2) + pow(y3-y2,2);
    //cout<<" "<<s2;
    double s3 = pow(x3-x1,2) + pow(y3-y1,2);
    //cout<<" "<<s3;
    if(s3 == (s1 + s2))
       {
        count++;
        continue;
    }
    else if(s1 == (s2 + s3)){
        count++;
        continue;
    }
        else if(s2 == (s1 + s3)){
        count++;
        continue;
    }
}
cout<<count;
return 0;
}
