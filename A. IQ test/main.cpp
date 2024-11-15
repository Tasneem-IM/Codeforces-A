#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int coe=0,e=0,coo=0,o=0;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       if(arr[i]%2==0)
       {
           coe++;
           e=i;
       }
       else
       {
           coo++;
           o=i;
       }
    }
    if(coo>coe)
    {
        cout<<e+1;
    }
    else
    {
        cout<<o+1;
    }

    return 0;
}
