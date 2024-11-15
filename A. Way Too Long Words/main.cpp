#include <iostream>
#include <string>
using namespace std;
int main()
{
   int n,m,a;
   cin>>n>>m>>a;
   if((n*m)%(a*a)==0)
   {
       cout<<((n*m)/(a*a));
   }

    return 0;
}
