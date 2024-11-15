#include <iostream>
using namespace std;
int main()
{
    int y,a,b,c,d;
    cin>>y;
    a=(y+1)/1000;
    b=((y+1)/100)%10;
    c=((y+1)/10)%10;
    d=(y+1)%10;
    while (a==b||a==c||a==c||a==d||b==c||b==d||c==d)
    {
    y++;
    a=(y+1)/1000;
    b=((y+1)/100)%10;
    c=((y+1)/10)%10;
    d=(y+1)%10;
    }
    cout<<y+1;
    return 0;
}
