#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,comax=0,comin=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[1];
    for(int i=0;i<n;i++)
    {
      if(a[i]<=min)
        {
            min=a[i];
            comin=i;
        }
    }
    for(int j=n-1;j>=0;j--)
    {
      if(a[j]>=max)
        {
      max=a[j];
      comax=j;
      }
    }
    if(comax==0&&comin==n-1)
    {
        cout<<"0";
    }
    else if(comax>comin)
    {
        cout<<comax+((n-comin)-2);
    }
    else if(comin>comax)
    {
        cout<<comax+((n-comin)-1);
    }
    return 0;
}
