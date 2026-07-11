#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<long long>& b){
     for(long long i=0; i<b.size()-1; i++){
         if(b[i]>b[i+1]){
            return false;
         }
     }
     return true;
}

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin>> n;
        vector<long long>a(n);
        vector<long long>v;
        for(long long i=0; i<n; i++){
            cin>> a[i];
        }
        long long k=LONG_LONG_MIN;
         for(long long i=0; i<n-1; i++){
             k = max(k,a[i]-a[i+1]);
         }

         if(isSorted(a)){
            cout<<"YES" <<endl;
         }else{
             for(long long i=0; i<n-1; i++){
                if(a[i]>a[i+1]){
                    a[i+1] += k;
                }
             }
             if(isSorted(a)){
                cout<<"YES" <<endl;
             }else{
                cout<<"NO" <<endl;
             }
         }

    }
    
    return 0;
}