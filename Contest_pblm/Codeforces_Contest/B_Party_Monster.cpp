#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
      int l; cin >> l;
      int cnt1 =0,cnts=0;
      string s; cin >> s;
      for(int i=0; i<s.length();i++){
        if(s[i]=='(')cnt1++;
        else cnts++;
      }
       if(cnt1 == cnts)
       cout<<"YES" <<endl;
       else cout<<"NO" <<endl;
    }
    
    return 0;
}