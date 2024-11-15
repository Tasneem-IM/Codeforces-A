#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<pair<int,int>>a(n);

    for(int i=0;i<n;i++)
    {
      a[i].first=arr[i];
      a[i].second=i+1;
    }
     sort(a.begin(),a.end());

        for(int i=0;i<n;i++)
        {
            cout<<a[i].second<<" ";
        }

    return 0;
}
