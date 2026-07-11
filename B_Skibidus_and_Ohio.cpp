#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string s;cin >>s;
        bool is_reduce = false;
        for(int i=0; i<s.size();i++){
            if(s[i]==s[i-1]){
              is_reduce = true;
              break;
            }
        }
        if(is_reduce){
            cout<<1 <<endl;
        }else{
            cout<<s.size() <<endl;
        }
    }
    return 0;
}