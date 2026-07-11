#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<long long> a(n);
        int cnt1 =0,cnt0=0;
        for(long long i=0; i<n;i++){
            cin >>a[i];
            if(a[i]==1)cnt1++;
            if(a[i]==0)cnt0++;
        }
        long long ans = pow(2,cnt0)*cnt1;
        cout<<ans <<endl;
           
    }
    
    return 0;
}