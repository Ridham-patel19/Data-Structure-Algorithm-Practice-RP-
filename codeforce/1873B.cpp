#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int minIndex = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[minIndex]) {
                minIndex = i;
            }
        }

        a[minIndex]++;

        long long product = 1;
        for (int i = 0; i < n; i++) {
            product *= a[i];
        }

        cout << product << "\n";
    }

    return 0;
}