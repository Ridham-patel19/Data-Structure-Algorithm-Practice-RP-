#include <iostream>
using namespace std;

bool isPalindrome(long long x) {
    long long original = x;
    long long reversed = 0;

    while (x > 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    return original == reversed;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        bool found = false;

        for (long long b = 0; b <= n; b += 12) {
            long long a = n - b;

            if (isPalindrome(a)) {
                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << "\n";
        }
    }

    return 0;
}