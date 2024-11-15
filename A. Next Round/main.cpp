#include <iostream>

using namespace std;

int main()
{
    int n,k,co=0;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>=arr[k]&&arr[i]>0)
        co++;
    }
    cout<<co;
    return 0;
}
