#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<long long> a(n+1);
        for(long long  i=1;i<=n;i++)
          cin >> a[i];
        long long extra=0;
        bool ok = true;
         for(long long  i=1;i<=n;i++){
            a[i]+=extra;
            if(a[i]<i){
                ok = false;
            }
            extra = a[i]-i;
         }
         
         

         if(ok) cout<<"YES" <<endl;
         else cout<<"NO" <<endl;
    }
    
    return 0;
}