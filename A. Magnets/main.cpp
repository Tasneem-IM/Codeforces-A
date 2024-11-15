#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    int co=1;
    for(int i=1;i<n;++i){
        if(a[i]!=a[i-1]){
            ++co;
        }
    }
    cout<<co<<endl;
    return 0;
}
