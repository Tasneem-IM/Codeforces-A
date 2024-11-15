#include <iostream>
using namespace std;
int main()
{
     int ch1,ch2,temp,arr[5][5];
     temp=0;
     ch1=0;
     ch2=0;
     for(int a=0;a<5;a++)
     {
         for(int b=0;b<5;b++)
         {
             cin>>arr[a][b];
         }
     }
     for(int i=0;i<5;i++)
     {
         for(int j=0;j<5;j++)
         {
             if(arr[i][j]==1)
             {
                 if(i<2)
                 {
                   temp+=-1*(i-2);
                 }
                 if(i>2)
                 {
                   temp+=i-2;
                 }
                 if(j<2)
                 {
                   temp+=-1*(j-2);
                 }
                 if(j>2)
                 {
                   temp+=j-2;
                 }
                  arr[i][j]=0;
                  arr[2][2]=1;
             }
         }
     }
     cout<<temp<<endl;
     return 0;
}
