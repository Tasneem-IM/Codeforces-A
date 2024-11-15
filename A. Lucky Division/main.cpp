#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, co = 0;
    cin >> n;
    vector<int> rr;

    for (int i = 1; i <= n; i++) {
        int num = i;
        bool contains_only_4_or_7 = true;

        for (int num_copy = num; num_copy > 0; num_copy /= 10) {
            int digit = num_copy % 10;
            if (digit != 4 && digit != 7) {
                contains_only_4_or_7 = false;
                break;
            }
        }

        if (contains_only_4_or_7) rr.push_back(i);
    }

    for (int i = 0; i < rr.size(); i++) {
        if (n % rr[i] == 0) {
            co++;
        }
    }

    if (co > 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

