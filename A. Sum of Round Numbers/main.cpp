#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int>ans;
        int mu=1;//منزلة العدد مشان نضيف عدد الاصفار المناسب

        while(n>0)
        {
            int d=n%10;
            if (d!=0)
            {
                ans.push_back(d*mu);//مشان المنزلة نوخذ عدد الاصفار الصح
            }
            mu*=10;//بنزيد منزلة 0
            n/=10;
        }

        cout<<ans.size()<<endl;
        for (int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

