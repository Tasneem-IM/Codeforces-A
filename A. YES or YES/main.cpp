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
      string s;
      cin>>s;
      for(ll i=0;i<3;i++)
      {
          s[i]=toupper(s[i]);
      }
      if(s[0]=='Y'&&s[1]=='E'&&s[2]=='S')
      {
          cout<<"YES";
      }
      else
      {
          cout<<"NO";
      }
      cout<<endl;
	}
    return 0;
}
