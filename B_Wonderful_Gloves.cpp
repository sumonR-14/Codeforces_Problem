#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long n,k; cin >> n >>k;
        vector<int>vleft(n);
        vector<int>vR(n);
        vector<int>vm;

        for(long long i =0; i<n; i++) cin>> vleft[i];
        for(long long i =0; i<n; i++) cin>> vR[i];

        long long sum =0;

        for(long long i =0; i<n; i++){
          long long a = max(vleft[i],vR[i]);
          sum +=a;
          long long b = min(vleft[i], vR[i]);
          vm.push_back(b);
        }
        sort(vm.begin(),vm.end(),greater<int>());

        for(long long i =0; i<k-1; i++){
            sum += vm[i];
        }
        cout<<sum+1 <<endl;
    }
    
    return 0;
}