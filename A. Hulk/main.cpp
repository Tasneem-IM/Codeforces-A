#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1){cout<<"I hate it";}
    else{
    for(int i=0;i<n;i++)
    {
        if(i==0){cout<<"I hate ";}
        else if(i%2!=0){cout<<"I love ";}
        else if(i%2==0){cout<<"I hate ";}
        if(i+1==n)
        {
           cout<<"it";
        }
        else
        {
            cout<<"that ";
        }
    }
    }
    return 0;
}
