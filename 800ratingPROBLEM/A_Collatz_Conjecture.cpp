#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;cin >> t;
   while (t--)
   {
     int k,x; cin >> k >>x;
     if(k==1){
        cout<<x*2 <<endl;
     }else{
        int res = x << k;
        cout<<res <<endl;
     }
   }
   
    return 0;
}