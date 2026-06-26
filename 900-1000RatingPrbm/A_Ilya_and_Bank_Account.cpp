#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    if(s[0] != '-'){
        cout<<s <<endl;
    }
    else{
        if(s.size()==3){
            if(s[s.size()-1]=='0'){
                cout<<0 <<endl;
            }
            else{
                if(s[2]>s[1]){
                    cout<<s[0]<<s[1] <<endl;
                }
                else{
                    cout<<s[0]<<s[2] <<endl;
                }
            }
        }
        else{
            if(s[s.size()-1]<s[s.size()-2]){
                s.erase(s.size()-2,1);
                cout<<s <<endl;
            }
            else{
                 s.erase(s.size()-1,1);
                 cout<<s <<endl;
            }
        }
    }
    return 0;
}