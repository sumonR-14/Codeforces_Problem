#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n;cin >> n;
        long long lowestMin = 1e18;
        long long secondlowestMin =1e18;
        long long sum_sec = 0;
        while (n--)
        {
            int m; cin >>m;
            vector<long long>a(m);
            for(long long i=0; i<m; i++){
                cin >>a[i];
            }
            sort(a.begin(),a.end());
            long long mn = a[0];
            long long sec = a[1];

             sum_sec += sec;

             lowestMin = min(lowestMin,a[0]);
             secondlowestMin = min(secondlowestMin,a[1]);
        }
        long long ans = lowestMin +( sum_sec - secondlowestMin);
        cout<<ans <<endl;
        
    }
    
    return 0;
}