#include <iostream>
using namespace std;
int main() {
int A, B;
cin>>A>>B;
int result = A-B;
int removedDigit = result%10;
if(removedDigit==0)
{
    result=1;
    cout<<result;
    return 0;
}
result = (result/10)*10 + (removedDigit+1);
cout<<result;
return 0;
}
