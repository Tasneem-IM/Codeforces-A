#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
       int a,b;
       cin>>a>>b;
       if(a==0&&b==0)
       {
            cout<<"YES";
                   cout<<endl;

       }
       else if(a>0&&b==0)
       {
         if(a%2==0)
           {
            cout<<"YES";
           }
         else
           {
            cout<<"NO";
           }
       cout<<endl;
       }
                   else if(a>0&&b>0){
                      if(a%2!=0)
                       {
                        cout<<"NO";
                       }
                    else if(a%2==0)
                       {
                        if(a%2==0)
                        {
                         cout<<"YES";
                        }
                        else {
                        cout<<"NO";
                        }
                       }
                   cout<<endl;
                                    }
                                        else if(a==0&&b>0){
                                          if(b%2==0)
                                           {
                                            cout<<"YES";
                                           }
                                       else
                                           {
                                            cout<<"NO";
                                           }
                                       cout<<endl;
                                        }

    }

    return 0;
}
