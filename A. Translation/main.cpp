#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t,s,x;
    int co=0;
    cin>>t;
    cout<<endl;
    cin>>s;

      for(int j=t.length()-1;j>=0;j--)
      {
         x.push_back(t[j]);
      }

      for(int i=0;i<t.length();i++)
      {

          if(x[i]==s[i])
            {co++;}
      }

      if(co==t.length()&&x.length()==s.length())
      {
          cout<<"YES";
      }
      else
        {
         cout<<"NO";
        }


    return 0;
}
