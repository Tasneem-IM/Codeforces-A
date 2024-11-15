#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int co1=0,co2=0;
    if(s.length()==1&&isupper(s[0]))
    {
      char e=s[0];
      e=tolower(e);
      cout<<e;
    }
    else
    {
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[0]))
        {
           if(isupper(s[i]))
           {
              co1++;
           }
        }
        if(islower(s[0]))
        {
            if(isupper(s[i]))
            {
                co2++;
            }
        }
    }
    if(co1==s.length())
        {
        for(int i=0;i<s.length();i++)
        {
           s[i]=tolower(s[i]);
        }
        }

    if(co2==s.length()-1)
        {
        s[0]=toupper(s[0]);
        for(int i=1;i<s.length();i++)
        {
           s[i]=tolower(s[i]);
        }
        }

        cout<<s;
    }
    return 0;
}
