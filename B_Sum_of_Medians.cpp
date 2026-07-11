#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >>k;
        vector<long long>a(n*k);
        for(long long i=0; i<n*k;i++) cin >>a[i];

        long long p = n*k;
        long long sm =0;
        while (k--)
        {
         p -= ( n/2 +1);
         sm += a[p];   
        }
        cout<<sm <<endl;
        
    }
    
    return 0;
}