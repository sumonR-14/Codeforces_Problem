#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long n,x; cin>> n >>x;
        vector<long long>a(n);
        long long sum=0,ans=0;
        for(long long i=0; i<n; i++){
            cin >>a[i];
             sum += a[i];
        }
        
         for(long long i=0; i<n; i++){
                 ans += (a[i]+x-1)/x;
         }
          long long z = (sum+x-1)/x;
          cout<<z <<" " <<ans <<endl;
    }
    
    return 0;
}