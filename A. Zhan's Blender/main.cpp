#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int max_rating = a[n-1];
        for (int i = 0; i < n-1; ++i) {
            max_rating -= a[i];
        }
        cout << max_rating << endl;
    }
    return 0;
}
