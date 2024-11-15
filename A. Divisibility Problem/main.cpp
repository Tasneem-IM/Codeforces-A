#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t,co;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        co=0;
        if(a%b!=0)
        {
           co=((1+(a/b))*b)-a;
        }

        cout<<co<<endl;
    }
    return 0;
}
