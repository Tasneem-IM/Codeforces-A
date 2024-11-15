#include <iostream>
using namespace std;
int main()
{
 int n,max1,max2;
 cin>>n;
 int arr[n];
for(int i=0;i<n;i++)
{
   cin>>arr[i];
}
max2=arr[1];
max1=arr[0];
for (int j=0;j<n;j++)
{
    if(arr[j]>max1)
           {
              max1=arr[j];
           }
         }
int exp=0;
for (int c=0;c<n;c++)
{
    for(int d=c+1;d<n;d++)
    {
    if(arr[c]==arr[d])
    {
        exp=c;
        break ;
    }
    }
    if(exp!=0)
    {
        break;
    }
    }
for (int h=0; h<n;h++)
{

    if(h!=exp)
    {
    if(arr[h]>max2)
           {
              max2=arr[h];
           }
    }
}
       cout<<max1<<max2<<endl<<max1*max2;
       return 0;
}
