#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int maxScore(const vector<int>& arr) {
    int n = arr.size();
    int maxElement = 0, count = 0;

    for (int i = 0; i < n; ++i) {
        if (i == 0 || arr[i] != arr[i - 1]) { // عدم تلوين العناصر المتجاورة
            count++;
            maxElement = max(maxElement, arr[i]);
        }
    }
    return maxElement + count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int result = maxScore(arr);
        cout << result << endl;
    }

    return 0;
}


