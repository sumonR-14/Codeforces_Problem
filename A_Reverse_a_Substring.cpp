#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s ; cin >> s;
    bool lexo = true;
    int pos = -1;
    for(int i=0; i<n-1; i++){
        if(s[i] > s[i+1]){
             lexo = false;
             pos = i;
             break;
        }
    }
    if(lexo){
        cout<<"NO" <<endl;
        return 0;
    }
    char mn = s[0];
    int idx = pos +1;
     for(int i=0; i<n; i++){
        if(s[i] < mn){
            mn = s[i];
            idx =i;
        }
    }
     reverse(s.begin()+pos,s.begin()+idx +1);
     cout<<"YES" <<endl;
     cout<<pos+1  <<" " <<idx+1 <<endl;

    return 0;
}