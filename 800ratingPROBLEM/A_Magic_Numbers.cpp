#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt =0;
    bool found = false;
    if(s[0]!='1'){
        cout<<"NO" <<endl;
        return 0;
    }
    for(int i=0; i<s.size();i++){
        if(s[i]!='1' && s[i]!='4'){
            found = true;
            break;
        }
        if(s[i]=='4')cnt++;
        else cnt=0;

        if(cnt>=3){
            found = true;
            break;
        }
    }

    if(found==true) cout<<"NO" <<endl;
    else cout<<"YES" <<endl;
    return 0;
}