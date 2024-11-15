#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r,co0l=0,co0r=0,co1l=0,co1r=0,co=0;
    cin>>n;
    for(int i=-0;i<n;i++)
    {
        cin>>l;
        cout<<" ";
        cin>>r;
        cout<<endl;
        if(l==0){co0l++;}
        else if(l==1){co1l++;}
        if(r==0){co0r++;}
        else if(r==1){co1r++;}
    }
    if(co0l>co1l){co+=co1l;}
    else if(co0l<=co1l){co+=co0l;}
    if(co0r>co1r){co+=co1r;}
    else if(co0r<=co1r){co+=co0r;}

    cout<<co;
    return 0;
}
