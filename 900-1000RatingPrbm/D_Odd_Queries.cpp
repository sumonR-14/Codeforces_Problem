#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >>t;
    while (t--)
    {
        int n,q; cin >> n >> q;
        int pre[n];
        vector<int>a(n+1);
        int oldsum =0;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            oldsum += a[i];
        }
        pre[1] = a[1];
        for(int i=2; i<=n; i++){
            pre[i] = a[i] + pre[i-1];
        }

        while (q--)
        {
            int l,r,k; cin >> l >>r >> k;
            int segsum;
            if(l==1){
                segsum = pre[r];
            }else{
                segsum = pre[r] - pre[l-1];
            }
            int newSum = oldsum - segsum + (r-l+1)*k;
            if(newSum%2!=0) cout<<"YES" <<endl;
            else cout<<"NO" <<endl;
        }
        
    }
    
    return 0;
}