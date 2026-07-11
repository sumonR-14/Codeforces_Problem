#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long n,p; cin >> n >>p;
        vector<long long>a(n),b(n);
        vector<pair<long long,long long>>v(n);
        for(long long i=0; i<n; i++) cin >>a[i];
        for(long long i=0; i<n; i++) cin >>b[i];
        for(long long i=0; i<n; i++){
            v[i] ={b[i],a[i]};
        }
        sort(v.begin(),v.end());
        long long cost =p;
        long long alrdy_shared = 1;
        for(auto it : v){
            long long baki_share = it.second;
            long long bakider_cost = it.first;

            if(bakider_cost>=p) break;
            if(alrdy_shared+baki_share >n){
                cost += (n-alrdy_shared)*bakider_cost;
                alrdy_shared = n;
                break;
            }
            else {
                cost +=baki_share*bakider_cost;
                 alrdy_shared += baki_share; 
            }
        }
        cost += (n-alrdy_shared)*p;
        cout<<cost <<endl;

    }
    
    return 0;
}