#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,sum1=0,sum2=0,co=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());

    for(int i=0;i<n;i++)
    {
      sum1=sum1+arr[i];
      sum2=sum-sum1;

    if(sum1>sum2)
      {
          co=i+1;
          break;
      }
    }
    cout<<co;

    return 0;
}
