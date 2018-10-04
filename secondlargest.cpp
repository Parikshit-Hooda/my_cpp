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
    cout<<largest<<endl;
    continue;
}
else if(ip3>=second_largest) {
    cout<<ip3<<endl;
    continue;
}
else {
        if(ip3<second_largest) {
            if(largest==second_largest)
            {
                cout<<ip3<<endl;
                continue;}
            cout<<second_largest<<endl;
            continue;
        }
    cout<<ip3<<endl;
    continue;
}
}
return 0;
}
