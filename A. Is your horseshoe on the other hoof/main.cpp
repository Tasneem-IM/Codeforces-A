#include <iostream>
#include <set>
using namespace std;
int main() {
    int s;
    set<int>ss;
    for(int i=0;i<4;i++)
    {
      cin>>s;
      ss.insert(s);
    }
    int dup= 4-ss.size();
    cout<<dup<<endl;
    return 0;
}
