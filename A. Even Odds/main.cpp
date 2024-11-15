#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    cin>>n>>k;
    ll o=(n+1)/2;
    if(k<=o)cout<<2*k-1;
    else{
        ll e=n/2;
        ll ans=k-o;
        cout<<2*ans;
    }
    return 0;
}
