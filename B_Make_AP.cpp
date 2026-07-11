#include<bits/stdc++.h>
using namespace std;

int main() {
   int t; cin >> t;
   while (t--)
   {
    long long a,b,c; cin >> a >> b >> c;
    long long m = (2*b-c)/a;
    bool ans = false;
    if(m>0 && (2*b-c)%a==0) ans = true;
    long long m2 = (a+c)/(2*b);
    if(m2>0 && (a+c)%(2*b)==0) ans = true;
    long long m3 = (2*b-a)/c;
    if(m3>0 && (2*b-a)%c==0 ) ans = true;

    if(ans) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
   }
   
    return 0;
}