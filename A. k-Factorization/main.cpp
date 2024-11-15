#include <bits/stdc++.h>
using namespace std;

vector<int> primefac(int n) {
    vector<int> num;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            num.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        num.push_back(n);
    }
    return num;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> fac = primefac(n);
    vector<int> num;

    for (int i = 0; i < fac.size() && k > 1; i++) {
        n /= fac[i];
        k--;
        num.push_back(fac[i]);
    }

    if (k == 1 && n > 1) {
        num.push_back(n);
        k--;
    }

    if (k == 0)
        for (int j=0;j<num.size();j++) {
            cout << num[j] << " ";
        }

     else {
        cout << -1 << endl;
    }

    return 0;
}






