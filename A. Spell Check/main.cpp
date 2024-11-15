#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n ;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if (s=="Timru")cout<<"YES";
        else cout <<"NO";
        cout<<endl;
    }
    return 0;
}
