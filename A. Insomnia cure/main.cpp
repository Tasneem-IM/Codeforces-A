#include <iostream>

using namespace std;

int main()
{
    int k,l,m,n,d,co=0;
    cin>>k;
    cout<<endl;
    cin>>l;
        cout<<endl;

    cin>>m;
        cout<<endl;

    cin>>n;
        cout<<endl;

    cin>>d;
    cout<<endl;

    for(int i=1;i<=d;i++)
    {
        if(i%k!=0&&i%l!=0&&i%m!=0&&i%n!=0)
        {
            co++;
        }
    }
     cout<<d-co;
    return 0;
}
