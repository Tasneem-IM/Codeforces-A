#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
        if(arr[i]==-1)
        {
            if(sum==0)
            {
              ans++;
            }
            else
            {
              sum--;
            }
        }
    }
    cout<<ans;

    return 0;
}
