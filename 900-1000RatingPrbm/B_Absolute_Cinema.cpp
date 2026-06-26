#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<long long>a(n),b(n);
        long long mx = LONG_LONG_MIN,sum=0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++) cin >> b[i];
        for(int i=0; i<n; i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
            }
        }
         for(int i=0; i<n; i++){
            sum += b[i];
         }
         for(int i=0; i<n;i++){
              mx = max(mx,a[i]);
         }
         cout<<mx+sum <<endl;
    }
    
    return 0;
}