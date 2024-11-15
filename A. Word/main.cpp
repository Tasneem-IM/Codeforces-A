#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cou=0,col=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            cou++;
        }
        if(islower(s[i]))
        {
            col++;
        }
    }
    if(cou>col)
    {
        for(int i=0;i<s.length();i++)
        {
                  s[i]=toupper(s[i]);
        }
        cout<<s;
    }
    if(col>=cou)
    {
        for(int i=0;i<s.length();i++)
        {
                  s[i]=tolower(s[i]);
        }
        cout<<s;
    }
    return 0;
}
