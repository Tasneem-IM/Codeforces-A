#include <iostream>
#include <vector>
using namespace std;

bool isprime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    int count = 0;

    for (size_t i = 0; i < primes.size() - 1; i++) {
        int candidate = primes[i] + primes[i + 1] + 1;
        if (candidate <= n && is_prime[candidate]) {
            count++;
        }
    }

    if (count >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

