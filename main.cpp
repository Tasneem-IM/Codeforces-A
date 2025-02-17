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
    ll x1,x2,x3;
    cin>>x1>>x2>>x3;
    ll a[3]={x1,x2,x3};
    sort(a,a+3);
    cout<<abs(x1-a[1])+abs(x2-a[1])+abs(x3-a[1]);

    return 0;
}
