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
	    ll a,b,c;
	    cin>>a>>b>>c;
	    ll x;
	    if(a!=b&&a!=c&&b==c){x=a;}
	    else if(b!=a&&b!=c&&a==c){x=b;}
	    else if(c!=a&&c!=b&&a==b){x=c;}
	    cout<<x<<endl;

	}
    return 0;
}
