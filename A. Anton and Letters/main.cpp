#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char>ar;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>=97&&s[i]<=122){
        ar.insert(s[i]);
        }
    }
    cout<<ar.size();
    return 0;
}
