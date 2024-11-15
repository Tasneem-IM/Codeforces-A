#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string c="WUB";
    int e=s.length();
    vector<string>st;
    while(e--)
        {
        int x=s.find(c);
                if(x==false)
                {
                    st.push_back(s.substr(0,x));
                    st.push_back(" ");
                }
        }
    for(int i=0;i<st.size();i++)
    {
    cout<<st[i];
    }
    return 0;
}
