#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int co1=0,co2=0;
    string a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.length();i++)
    {
          a[i]=toupper(a[i]);
          b[i]=toupper(b[i]);
    }
    for(int i=0;i<a.length();i++)
    {
        if(a[i] > b[i])
        {
           co1++;
           break;
        }
        if(b[i] > a[i])
        {
           co2++;
           break;
        }
    }
    if(co1>co2){cout<<"1";}
    else if(co1<co2){cout<<"-1";}
    else if(co1==co2){cout<<"0";}
    return 0;
}
