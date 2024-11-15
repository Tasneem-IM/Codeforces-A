#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,max,sum=0;
    cin>>n;
    vector<int>arr;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        arr.push_back(a);
        arr.push_back(b);
    }
    max=0;
    for(int i=0;i<arr.size();i++)
    {
        if(sum>=max){
            max=sum;
        }
        if(i==0){sum+=arr[0];}
        else if(i%2!=0)
        {
          sum+=arr[i];
        }
        else if(i%2==0)
        {
          sum-=arr[i];
        }
    }
    cout<<max;
    return 0;
}
