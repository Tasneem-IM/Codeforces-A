#include <iostream>

using namespace std;

int main()
{
    int n,co=0;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if((q-p)>=2)
        {
            co++;
        }
    }
    cout<<co;
    return 0;
}
