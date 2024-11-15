#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {while (b!=0) {int x=b;b=a%b;a=x;}return a;}
int main()
{
    int n,c;
    cin>>n>>c;
    cout<<gcd(n,c);
    return 0;
}
