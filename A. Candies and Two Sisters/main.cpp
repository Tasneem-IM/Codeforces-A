#include <iostream>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       ll x=(n-1)/2;
        if(x<0)
        {
            x=0;
        }
        cout<<x<<endl;
    }
}
