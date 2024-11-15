#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    int c=0;
    cin>>a;
     for(int i=0;i<a.size();i++)
     {
         if(a[i]=='0')
         {
             a.erase(i,1);
             c++;
             break;
         }
     }
         if(c==0)
         {
             a.erase(a.size()-1,1);
         }
              cout<<a;
    return 0;
}
