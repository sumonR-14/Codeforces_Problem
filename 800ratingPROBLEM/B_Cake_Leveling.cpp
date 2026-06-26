#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        vector<long long> a(n);
        vector<long long> pre(n);
        for(int i=0; i<n;i++) cin >> a[i];
        pre[0]=a[0];
         for(int i=1; i<n;i++){
            pre[i] = a[i]+pre[i-1];
         }
         long long ans =LONG_LONG_MAX;
          for(int i=0; i<n;i++){
            ans = min(ans,pre[i]/(i+1));
            cout<<ans <<" ";
          }
          cout<<endl;
    }
    
    return 0;
}