#include <iostream>
using namespace std;

#define ll long long

int main() {
            ios::sync_with_stdio(false);
            cin.tie(nullptr);
            cout.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
{
        ll n,k;
        cin>>n>>k;
        ll x=0;
        if(k==1)
        {
            x=n;
        }
        else
        {
          while(n>0)
            {
                x+=n%k;
                n/=k;
            }
        }
        cout<<x<<endl;
}
    return 0;

}
