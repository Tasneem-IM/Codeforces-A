#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string x,y;
    for(int i=0;i<t;i++)
    {
       cin>>x;
       cout<<" ";
       cin>>y;
       for(int j=0;j<3;j++)
       {
           char h=x[0];
           x[0]=y[0];
           y[0]=h;
       }
       cout<<x<<" "<<y<<endl;
    }
    return 0;
}
