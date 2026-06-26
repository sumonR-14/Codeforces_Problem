#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n;cin >> n;
        unordered_set<long long>st;
        long long sum =0,ans=0;
        long long mx = LONG_LONG_MIN;
        for(int i=0; i<n;i++){
            long long x;
            cin >> x;
            sum += x;
            mx = max(mx,x);
            if(sum-mx==mx)ans++;

        }
        cout<<ans <<endl;
    }
    
    return 0;
}