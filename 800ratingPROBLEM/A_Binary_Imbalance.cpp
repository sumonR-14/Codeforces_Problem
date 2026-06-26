#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s ; cin >> s;
        bool allOne = true;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
               allOne = false;
               break;
            }
        }

        if(allOne) cout <<"NO"<<endl;
        else cout<<"YES" <<endl;
    }
    return 0;
}