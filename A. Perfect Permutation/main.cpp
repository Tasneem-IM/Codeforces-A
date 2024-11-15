#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a;
    if(n%2!=0)
    {
        cout<<"-1";
    }

    if(n%2==0)
    {

    for(int i=1;i<=n;i++)
    {
     a.push_back(i);
    }

    for(int j=0;j<n;j+=2)
    {
        cout<<a[j+1]<<" "<<a[j]<<" ";
    }
    }

    return 0;
}
