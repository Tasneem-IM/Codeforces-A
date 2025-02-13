#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
           long long  n;
       cin>>n;
           long long  sum=0;
       vector<    long long >arr(n);
       for(    long long  i=0;i<n;i++)
       {
           cin>>arr[i];
           sum+=arr[i];
       }

           if(sum>=n)
           {
           cout<<(sum-n)<<endl;
           }
           else
           {
           cout<<"1"<<endl;
           }
    }
    return 0;
}
