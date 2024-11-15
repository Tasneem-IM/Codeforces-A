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
        arr[n]=max1;

for (int h=0; h<n-2;h++)
{
    if(arr[h]>max2)
           {
              max2=arr[h];
           }
         }
       cout<<max1<<max2<<endl<<max1*max2;


    return 0;
}
