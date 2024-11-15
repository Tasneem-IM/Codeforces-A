#include <iostream>
using namespace std;
int main()
{
    int n,k,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int f=0;f<n;f++)
        {
            while(k!=0&&a[f]!=0)
            {
                a[f]--;
                a[n-1]++;
                k--;
            }
        }
        for(int l=0;l<n;l++)
        {
           cout<<a[l]<<" ";
        }
    cout<<endl;
    }
     return 0;
}
