#include <bits/stdc++.h>

using namespace std;
#define vi             vector <int>
#define pii            pair <int, int>
#define mii            map <int, int>
#define vpi            vector <pii>
#define mpi            map <pii, int>
#define spi            set <pii>
#define si             set <int>

int main()
{
    long n,k;
    cin>>n;
    cout<<" ";
    cin>>k;
    long sum=0,x=0;
    for(long i=1;i<=n;i++)
    {
            sum+=(i*5);
            if((sum+k)>240)
            {
               x=i-1;
               break;
            }

    }
       if (k>235){cout<<"0";}
       else if(x==0){cout<<n;}
        else {cout<<x;}
    return 0;
}
