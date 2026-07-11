#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long a,b,n; cin >> a >>b >> n;
        vector<long long> x(n);
        for(long long i=0;i<n; i++) cin >> x[i];
        long long sum =0,k;
        sum += (b-1);
        for(long long i=0;i<n; i++){
            k = min((1+x[i]),a);
            sum += (k-1);
         }
        cout<<sum+1 <<endl;
    }
    
    return 0;
}