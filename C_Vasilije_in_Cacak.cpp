#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long n,k,x; cin >> n >> k >> x;
        long long minS =0, maxS=0;
        minS =(k*(k+1))/2;
        maxS = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
        if(x>=minS && x<=maxS) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    } 
    return 0;
}