#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
        bool isprime(int x) {
            if (x<2) return 0;
            if (x==2) return 1;
            for (int i=2;i*i<=x;i++)
            if (x%i==0) return 0;
            return 1;
        }
int main()
{
    int n,count,sum;
    sum=0;
    cin>>n;
    for(int i=6;i<=n;i++)
    {
        if(isprime(i)!=1)
        {

            int h=i;
            count=0;
            vector<int>arr;
            int o=i;
            for(int f=2;f<o;f++)
              {
                 while(h%f==0)
                  {
                       arr.push_back(f);
                       h/=f;
                  }
              }
                    if(h!=1)
                        {
                            arr.push_back(h);
                        }
        sort(arr.begin(),arr.end());
        int g=arr.size();
        for(int j=0;j<g;j++)
        {
            if(arr[j]!=arr[j+1])
                {
                  count++;
                }
                else if(j==g-1)
                {
                   count++;
                }
                }
        if(count==2)
          {
              sum++;

          }
    }
    }
     cout<<sum;
     return 0;
}
