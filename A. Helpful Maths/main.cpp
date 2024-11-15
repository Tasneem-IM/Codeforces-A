#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1'||s[i]=='2'||s[i]=='3')
        {
            int q = s[i]-'0';
            v.push_back(q);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
        {
            cout<<"+";
        }
    }

    return 0;
}
