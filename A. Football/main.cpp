#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int co=0,c=0;
    string s;
    cin>>s;
    char temp='1';
    for(int i=0;i<s.length();i++)
    {
       if(s[i]==temp)//00100110111111101
       {
          co++;
            if(co==6)
               {
                c++;
               }
       }
       else
       {
           temp=s[i];
           co=0;
       }
    }
    if(c>0){cout<<"YES";}
    else {cout<<"NO";}
    return 0;
}
