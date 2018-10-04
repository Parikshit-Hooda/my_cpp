#include <iostream>
using namespace std;
//(float)n%x==0 yes
//
int main() {
    int t,n,m,x,y;
    cin>>t;
    while(t--) {
        cin>>n>>m>>x>>y;
        float nx_val = 0.0;
        float my_val = 0.0;
        nx_val = n/x;
        my_val = m/y;
        if(nx_val == n%x)
        {
            cout<<"Chefirnemo"<<endl;
            continue;
        }
        else if(my_val == m%y)
        {
            cout<<"Chefirnemo"<<endl;
            continue;
        }
        else if(nx_val - my_val == 1)
        {
            cout<<"Chefirnemo"<<endl;
            continue;
        }
        else {
            cout<<"Pofik"<<endl;
            continue;
        }
    }
    return 0;
    }
