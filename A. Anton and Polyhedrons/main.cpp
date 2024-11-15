#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n,co=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron"){co+=4;}
        if(s=="Cube"){co+=6;}
        if(s=="Octahedron"){co+=8;}
        if(s=="Dodecahedron"){co+=12;}
        if(s=="Icosahedron"){co+=20;}
    }
    cout<<co;
    return 0;
}
