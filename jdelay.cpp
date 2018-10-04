#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
	int n, si, ji, countOfDelay=0;
	cin>>n;
	while(n--){
	cin>>si>>ji;
	if((ji-si)>5)
		countOfDelay++;
	}
	cout<<countOfDelay<<endl;
}
return 0;
}
