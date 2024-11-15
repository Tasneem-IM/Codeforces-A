#include <iostream>
#include <bits/stdc++.h>
using namespace std;
        bool isprime(long long x) {
            if (x<2) return 0;
            if (x==2) return 1;
            for (int i=2;i*i<=x;i++)
            if (x%i==0) return 0;
            return 1;
        }

int main()
{
    int n,m;
    vector<int>a;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        if(isprime(i))
        {
            a.push_back(i);
        }
    }
    if(m==a[1])
    {
        cout<<"YES";
    }
    else
    {
         cout<<"NO";
    }

    return 0;
}
