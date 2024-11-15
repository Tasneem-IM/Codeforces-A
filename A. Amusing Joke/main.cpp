#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int co=0;
    string a;
    cin>>a;//SANTACLAUS
    string b;
    cin>>b;//DEDMOROZ
    string c;
    cin>>c;//SANTAMOROZDEDCLAUS
    string x=a+b;//SANTACLAUSDEDMOROZ

    for(int i=0;i<x.length();i++)
    {
        for(int j=0;j<c.length();j++)
        {
           if(x[i]==c[j])
           {
             c[j]='1';
             x[i]='1';
           }
        }
    }

    for(int j=0;j<c.length();j++)
    {
        if(c[j]=='1'&&x[j]=='1')
            {
                co++;
            }
    }
    if(co==c.length()&&co==x.length()){cout<<"YES";}
    else {cout<<"NO";}
    return 0;
}
