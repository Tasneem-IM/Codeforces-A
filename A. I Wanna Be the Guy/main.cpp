#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,co=0,c=0;
    cin>>n;
    set<int>arr;
    int p,q;
    cin>>p;
    while(p--)
    {
        int a;
        cin>>a;
        arr.insert(a);
    }

    cin>>q;
    while(q--)
    {
        int b;
        cin>>b;
        arr.insert(b);
    }

    if(arr.size()==n){cout<<"I become the guy.";}
    else {cout<<"Oh, my keyboard!";}
    return 0;
}
