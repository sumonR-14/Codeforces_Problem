#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n,x,y;
        cin >> n >> x >>y;
        int g = gcd(x,y);
        bool ok = true;
        for(int i=1; i<=n; i++){
            int val;
            cin >> val;
            if((i%g) != (val%g)){
                ok = false;
            }

        }

        if(ok)cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
    
    return 0;
}