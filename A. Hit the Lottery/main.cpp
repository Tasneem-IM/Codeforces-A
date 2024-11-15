#include <iostream>

using namespace std;

int main()
{
    int n,co=0;
    cin>>n;
    while(n!=0)
    {
      if(n%100==0){
            n-=100;
            co++;
            continue;
      }
      else if(n%20==0){
        n-=20;
        co++;
        continue;
      }
      else if(n%10==0){
        n-=10;
        co++;
        continue;
      }
      else if(n%5==0){
        n-=5;
        co++;
        continue;
      }
      else if(n%1==0){
        n-=1;
        co++;
        continue;
      }
    }
    cout<<co;
    return 0;
}
