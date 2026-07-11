#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        string s;cin>>s;
        string z ="";

        for(int i=0; i<s.size()-2; i++){
                z += s[i];
        }
         z += 'i';
         cout<<z <<endl;
    }
    return 0;
}