#include <bits/stdc++.h>
using namespace std;
int main() {

int t;
cin>>t;
while(t--) {
int k,p1,p2;
cin>>k>>p1>>p2;
int totalPoints = p1+p2;
if(k==0) {
    cout<<"COOK"<<endl;
    continue;
}
if((totalPoints/k)%2 == 0) {
	cout<<"COOK"<<endl;
	}
	else {
	cout<<"CHEF"<<endl;
	}


}

return 0;
}
