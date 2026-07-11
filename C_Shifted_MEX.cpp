#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        long long mx = 0,cnt =0;
        

        for (long long i = 1; i <a.size(); i++) {
            if ((a[i]-a[i-1])==1){
                cnt++;
            }
             else {
                 cnt = 0;
             } 
            mx = max(mx,cnt);    
        }
        cout << mx+1 << "\n";
    }
    return 0;
}
