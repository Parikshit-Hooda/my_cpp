// second largest of three numbers
//second largest of three numbers
#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
int ip1,ip2,ip3;
cin>>ip1>>ip2>>ip3;
int largest=ip1;
int second_largest=ip2;
if(second_largest>largest)
{
    second_largest = ip1;
    largest = ip2;
}
if(ip3>=largest) {
    second_largest = largest;
    largest = ip3;
}
else if(ip3>=second_largest) {
    second_largest = ip3;
}
cout<<second_largest<<endl;
}
return 0;
}
