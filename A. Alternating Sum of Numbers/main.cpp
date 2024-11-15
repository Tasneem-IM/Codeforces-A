#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,sum=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(j==0){
                    sum=arr[0];
            }
            else if(j>0){
            if(j%2==0){
                    sum+=arr[j];
            }
            else if(j%2!=0){
                    sum-=arr[j];
            }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
