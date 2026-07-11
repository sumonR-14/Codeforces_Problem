#include<bits/stdc++.h>
using namespace std;

int main() {
   int t; cin >>t;
   while (t--)
   {
     int n,x,k; cin >> n >> x >>k;
     if(x%k==0){
        cout<<0 <<endl;
     }
     else{
        int down = x%k;
        int up = k-down;
        
        int ans = down;
        if(x+up<=n) ans = min(ans,up);
        
        cout<<ans <<endl;
     }
   }
   
    return 0;
}