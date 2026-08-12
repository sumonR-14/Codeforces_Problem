#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin>> n;
        vector<long long>a(n+1);
        map<long long,long long> cnt;
        long long ans=0;
        for(int i=1; i<=n; i++){
            cin>> a[i];
            long long rs = a[i]-i;
            ans += cnt[rs];
            cnt[rs]++;
        }
        cout<<ans <<endl;
    }
    
    return 0;
}