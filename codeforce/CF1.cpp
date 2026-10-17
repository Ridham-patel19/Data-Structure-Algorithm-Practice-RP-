#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << 0 << "\n";
            continue;
        }

        int ans = INT_MIN;

        // Case 1: Keep first element fixed, change last element
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[0]);
        }

        // Case 2: Keep last element fixed, change first element
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[n - 1] - a[i]);
        }

        // Case 3: Rotate the whole array
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[i] - a[i + 1]);
        }

        cout << ans << "\n";
    }

    return 0;
}