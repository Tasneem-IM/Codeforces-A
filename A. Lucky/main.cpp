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
	    ll sum1=0,sum2=0;
	    for(ll i=0;i<3;i++)
        {
          sum1+=(n%10);
          n/=10;
        }
        for(ll i=0;i<3;i++)
        {
          sum2+=(n%10);
          n/=10;
        }
        if(sum1==sum2){cout<<"YES";}
        else{cout<<"NO";}
        cout<<endl;
	}
    return 0;
}
