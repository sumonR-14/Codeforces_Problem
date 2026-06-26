#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // Step 1: Make a[i] maximum possible from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (i + 1 < n)
                a[i] = max(a[i], a[i + 1]);
            a[i] = max(a[i], b[i]);
        }

        // Step 2: Prefix sum
        vector<long long> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + a[i];
        }

        // Step 3: Answer queries
        while (q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;

            long long ans = pref[r];
            if (l > 0) ans -= pref[l - 1];

            cout << ans << " ";
        }
        cout << "\n";
    }

    return 0;
}
