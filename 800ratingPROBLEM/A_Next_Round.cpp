#include <iostream>
#include <vector>
using namespace std;

int* solve(vector<int>& a, int n, int k) {
    int* count = new int;  // dynamic allocation (pointer return করার জন্য)
    *count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0) {
            (*count)++;
        }
    }
    return count;  // pointer return
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int* ans = solve(a, n, k);   // function call
    cout << *ans << endl;        // dereference করে value print

    delete ans; // free memory (ভুলে যেও না)
    return 0;
}
