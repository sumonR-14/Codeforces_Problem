#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long n,c,k;
        cin >> n >> c >> k;
        vector<long long> a(n);
        for(long long i=0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());
         for(long long i=0; i<n; i++){
            if(a[i]>c){
              break;
            }else{   
                long long addPower = min(k,c-a[i]);
                k -= addPower;
                c += a[i] + addPower;
            } 
         }
        cout<<c <<endl;    
      
    }
    
    return 0;
}