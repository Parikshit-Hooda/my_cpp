#include <iostream>
using namespace std;

int main() {
int t,n,x,s;
cin>>t;
while(t--) {
cin>>n>>x>>s;
while(s--) {
int num1,num2;
cin>>num1>>num2;
if((num1>n || num1<1) || (num2>n || num1<1))
    continue;
if(num1==x)
	{
	x=num2;
	continue;
	}
if(num2==x)
	{
	x=num1;
	continue;
	}
}
cout<<x<<endl;
}
return 0;
}
