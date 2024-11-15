#include<iostream>
#define ll  long long

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll co;
    if(n%2==0){
        co=n/2;
    }else{
        co=-(n+1)/2;
    }
    cout<<co<<endl;
    return 0;
}
