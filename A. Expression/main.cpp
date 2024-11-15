#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x=a+b+c,y=a*b*c,z=(a+b)*c,s=a*(b+c);
    int ans=max(x,max(y,max(z,s)));
    cout<<ans<<endl;
    return 0;
}
