#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,q; cin >> n;
    vector<long long> x(n);
    for(int i=0; i<n;i++)cin >> x[i];
    sort(x.begin(),x.end());
    cin >> q;
    while (q--)
    {
        long long m; cin >> m;
        long long l=0,r=n-1;
        while (l<=r)
        {
           long long mid = l +(r-l)/2;
           if(x[mid]<=m){
              l=mid+1;
           }
           else{
             r = mid-1;
           }
        }
        cout<<l <<endl;
    }
    
    return 0;
}