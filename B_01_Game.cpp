#include<bits/stdc++.h>
using namespace std;

int main() {
   int t; cin >> t;
   while (t--)
   {
     string s; cin >> s;
     int cnt0=0,cnt1=0;
     for(int i=0; i<s.size(); i++){
        if(s[i]=='0')cnt0++;
        else cnt1++;
     }
     int op = min(cnt1,cnt0);

     if(op%2 != 0) cout<<"DA" <<endl;
     else cout<<"NET" <<endl;
   }
   
    return 0;
}