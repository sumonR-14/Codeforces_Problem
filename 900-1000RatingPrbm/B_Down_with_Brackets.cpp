#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int cnt =0;
        bool ok = false;

        for( int i=0; i<s.size(); i++){
            if(s[i]=='(') cnt++;
            else cnt--;

            if(cnt==0 && i!=s.size()-1){
                ok = true;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO" <<endl;
    }
    return 0;
}