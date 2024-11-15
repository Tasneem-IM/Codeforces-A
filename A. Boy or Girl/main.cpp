#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char>arr;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        arr.insert(s[i]);
    }
    if(arr.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
