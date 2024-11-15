#include <iostream>
#define  ll long long

using namespace std;

int main()
{
    ll k,n,w,sum=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
        sum+=(k*i);
    }
    if(sum-n<0){cout<<"0";}
    else {cout<<sum-n;}

    return 0;
}
