#include<bits/stdc++.h>
using namespace std;
//online judge extra space ignore kore
int main() {
    string s; cin>>s;
    string a ="";
    for(int i=0; i<s.size();){
        if(s.substr(i,3)=="WUB"){
            cout<<" ";
            i+=3;
        }else{
            cout<<s[i];
            i++;
        }
    }
    return 0;
}