#include <iostream>

using namespace std;
int main()
{
    int x,co=0;
    cin>>x;

    while(x>5)
    {

        co++;
        x-=5;
    }
    co++;
    cout<<co;
    return 0;
}
