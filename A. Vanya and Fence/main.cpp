#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,co=0,h;
    cin>>n>>h;
    cout<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       if(arr[i]>h)
       {
           co+=2;
       }
       else
       {
           co++;
       }
    }
    cout<<co;

    return 0;
}
