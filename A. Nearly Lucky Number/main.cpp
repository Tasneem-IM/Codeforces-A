#include <iostream>
using namespace std;

int main()
{
    string n;
    int ldc = 0;
    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            ldc++;
        }
    }

    if (ldc == 4 || ldc == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
