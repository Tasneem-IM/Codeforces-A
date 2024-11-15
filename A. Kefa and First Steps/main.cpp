#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    int arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int co=0,max=0;

    for(ll i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            co++;
            if(co>=max)
            {
                max=co;
            }
        }
        else
        {
            co=0;
        }
    }
    cout<<max+1;

    return 0;
}
