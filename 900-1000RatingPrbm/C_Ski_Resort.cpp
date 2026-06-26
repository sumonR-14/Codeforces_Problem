#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long n,k,q; cin >> n >>k >>q;
        vector<long long>a(n);
        vector<long long>segment;
        for(long long i=0; i<n; i++)cin>>a[i];
        long long cnt=0;
        for(long long i=0; i<n; i++){
            if(a[i]<=q)cnt++;
            else{
                segment.push_back(cnt);
                cnt =0;
            }
        }
         segment.push_back(cnt);
        long long ans =0;
        for(long long v : segment){
            if(v>=k){
                long long x=v-k+1;
                ans += x*(x+1)/2;
            }
        }
        cout<<ans <<endl;

    }
    
    return 0;
}