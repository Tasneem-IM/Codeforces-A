#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26){cout<<"NO";}
    else{
    char arr[n];
    for(int i=0;i<n;i++)
    {
        s[i]=toupper(s[i]);
        arr[i]=s[i];
    }
    sort(arr, arr + n);
    int ns = unique(arr,arr+n)-arr;

    if(ns==26){cout<<"YES";}
    else{cout<<"NO";}
    }
    return 0;
}
