#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       sum+=arr[i];
    }
    int nof=n+1,x=nof;
    while(x-sum<=0)
    {
      x*=nof;
    }
    cout<<x-sum;
    return 0;
}
