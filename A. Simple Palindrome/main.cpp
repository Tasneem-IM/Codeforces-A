#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s="aeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiouaeiou";
    while(t--)
    {
        int n;
        cin>>n;
        vector<char>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(s[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}
