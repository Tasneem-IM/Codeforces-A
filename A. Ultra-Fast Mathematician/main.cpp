#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,y;
    vector<int>s;
    cin>>x>>y;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]==y[i])
        {
            s.push_back(0);
        }
        else
        {
            s.push_back(1);
        }
    }
    for(int j=0;j<s.size();j++)
    {
        cout<<s[j];
    }
    return 0;
}
