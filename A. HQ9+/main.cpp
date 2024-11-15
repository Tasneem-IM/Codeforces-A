#include <iostream>
#include <string>
using namespace std;

int main()
{
    int co=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            co++;
        }
    }
    if(co>0){cout<<"YES";}
    else if(co==0){cout<<"NO";}

    return 0;
}
