#include <bits/stdc++.h>

using namespace std;
#define ll             long long
#define vi             vector <int>
#define pii            pair <int, int>
#define mii            map <int, int>
#define vpi            vector <pii>
#define mpi            map <pii, int>
#define spi            set <pii>
#define si             set <int>

int main()
{
    ll t;
    cin>>t;
    while(t--)
	{
	    ll n;
	    cin>>n;
	    ll arr[n];
	    for( ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans=-1;
        for(ll i=0;i<n-2;i++)
        {
           if(arr[i]==arr[i+1]&&arr[i+1]==arr[i+2])
           {
               ans=arr[i];
           }
        }
        cout<<ans<<endl;
	}
    return 0;
}
