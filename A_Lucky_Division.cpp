#include<bits/stdc++.h>
using namespace std;

int main() {
   int n; cin >> n;
   vector<int> a ={4,7,44,47,74,77,444,447,477,744,774,777};
   bool ok = false;
   for(int i=0; i<a.size();i++){
    if(n%a[i] == 0){
        ok = true;
    }
   }
   if(ok)cout<<"YES" <<endl;
   else cout<<"NO" <<endl;
    return 0;
}