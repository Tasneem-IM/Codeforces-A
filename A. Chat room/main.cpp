#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,a;
    int x=0,co=0;
    cin>>s;
    a="hello";
    for(int i=0;i<s.length();i++)
    {
        if(a[x]==s[i])
        {
            co++;
            x++;
        }
    }
    if(co==5){cout<<"YES";}
    else {cout<<"NO";}

    return 0;
}
