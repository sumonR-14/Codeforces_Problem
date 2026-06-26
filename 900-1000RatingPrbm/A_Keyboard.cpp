#include<bits/stdc++.h>
using namespace std;

int main() {
   char dck; cin >> dck;
   string s; cin >> s;

   string k = "qwertyuiopasdfghjkl;zxcvbnm,./";

   for(char c : s){
    int pos = k.find(c);
    if(dck=='R'){
        cout<<k[pos-1];
    }else{
        cout<<k[pos+1];
    }
   }

    return 0;
}