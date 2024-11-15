#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,B=0,C=0;
    cin>>n;
    vector<int>a(n);
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            B+=a[i];
        }
        else if(a[i]<=0)
        {
           C+=a[i];
        }
    }
    cout << B-C << endl;
    return 0;
}
