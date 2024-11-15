#include <iostream>
using namespace std;
int main()
{
    int n,c,xs,ys,zs;
    cin>>n;
    xs,ys,zs=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
          cin>>c;
          if(j==0)
          {
            xs+=c;
          }
          else if(j==1)
          {
              ys+=c;
          }
          else if(j==2)
          {
              zs+=c;
          }}
    }
    if(xs==0&&ys==0&&zs==0)
    {
        cout<<"YES";
    }
        else
        {
        cout<<"NO";
        }
        return 0;
}
