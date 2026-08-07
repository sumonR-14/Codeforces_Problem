#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n+1);

        for(int i=1; i<=n; i++){
           cin >> a[i];
        }
        vector<int> pre(n+2),suf(n+2);
        pre[1] =1;

        for(int i=2; i<=n; i++){
            pre[i] = pre[i-1];
            if(a[i] != a[i-1]) pre[i]++;
        }
        suf[n] =1;
        for(int i=n-1; i>=1; i--){
            suf[i] = suf[i+1];
            if(a[i] != a[i+1]) suf[i]++;
        }
        int ans = pre[n];

        for(int i=1; i<n; i++){
            if(a[i] == a[i+1]) continue;
            int cur =0;
            if(i>1){
                cur += pre[i-1];
                if(a[i+1] != a[i-1])cur++;
            }else cur++;

              if(i+1<n){
                if(a[i] != a[i+2])cur++;
                cur += suf[i+2];
            }else cur++;

            ans = max(ans,cur);
        }
        cout<<ans <<endl;
    }
    
    return 0;
}