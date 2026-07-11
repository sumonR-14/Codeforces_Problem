#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int ops = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = n - 1; i > 0; i--) {
            if (a[i] == 0 && a[i - 1] >= a[i]) {
                possible = false;
                break;
            }

            while (a[i - 1] >= a[i] && a[i - 1] > 0) {
                a[i - 1] /= 2;
                ops++;
            }

            if (a[i - 1] >= a[i]) {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << ops << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}