#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>f(m);
    for(int j=0;j<m;j++)
    {
        cin>>f[j];
    }
    sort(f.begin(),f.end());
            int min_diff=INT_MAX;
            for(int i=0;i<=m-n;i++) {
                int current_diff=f[i+n-1]-f[i];
                if(current_diff<min_diff) {
                    min_diff=current_diff;
                }
            }
            cout<<min_diff<<endl;
        return 0;
 }
