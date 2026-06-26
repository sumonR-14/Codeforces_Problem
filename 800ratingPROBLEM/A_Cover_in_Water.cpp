#include<bits/stdc++.h>
using namespace std;

int main() {
   int t; cin >> t;
   while(t--){
    int n; cin >> n;
    string s; cin >>s;
    int countd =0;
    int ans =0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='.'){
            countd++;
            ans++;
        }else{
            countd=0;
        }

        if(countd>=3) break;
    }

    if(countd >= 3){
        cout<<2 <<endl;
    }
    else{
        cout<<ans <<endl;
    }

   }
    return 0;
}