#include <iostream>

using namespace std;

int main()
{
    int a,b,co=0;
    cin>>a>>b;
    while(a<=b)
    {
        a=3*a;
        b=2*b;
        co++;
    }
    cout<<co;
    return 0;
}
