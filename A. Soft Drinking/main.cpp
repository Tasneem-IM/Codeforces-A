#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int k;
    cin>> k;
    int l;
    cin>> l;
    int c;
    cin>> c;
    int d;
    cin>> d;
    int p;
    cin>> p;
    int nl;
    cin>> nl;
    int np;
    cin>> np;
    cout<<(min(min(((l*k)/nl),(c*d)),(p/np)))/n;
    return 0;
}
