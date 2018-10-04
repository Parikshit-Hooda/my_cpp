//second largest of three numbers
#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
int ip1,ip2,ip3;
cin>>ip1>>ip2>>ip3;
if(ip1>=ip2 && ip1>=ip3){
	if((ip1>ip2) && (ip2<=ip3))
		{
		cout<<ip3<<endl;
		continue;
		}
	else if((ip1>ip2) && (ip2>ip3))
		{
		cout<<ip2<<endl;
		continue;
		}
		else
		{
		cout<<ip1<<endl;
		continue;
		}
}
else if(ip3>=ip1 && ip3>=ip2){
	if((ip3>ip1) && (ip2<=ip1))
		{
		cout<<ip1<<endl;
		continue;
		}
	else if((ip3>ip1) && (ip2>ip1))
		{
		cout<<ip2<<endl;
		continue;
		}
		else
		{
		cout<<ip3<<endl;
		continue;
		}
}
else if(ip2>=ip1 && ip2>=ip3){
	if((ip2>ip1) && (ip1<=ip3))
		{
		cout<<ip1<<endl;
		continue;
		}
	else if((ip2>ip1) && (ip3>ip1))
		{
		cout<<ip3<<endl;
		continue;
		}
		else
		{
		cout<<ip2<<endl;
		continue;
		}
}
}
return 0;
}
