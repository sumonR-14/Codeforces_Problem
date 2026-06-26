#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
         s[i]= tolower(s[i]);
    }
    string ans ="";
    for(int i=0; i<s.size(); i++){
         if(s[i]=='a'|| s[i]=='e'||s[i]=='o'
        ||s[i]=='i'|| s[i]=='u'|| s[i]=='y'){
            continue;
        }else{
            ans += '.';
            ans += s[i];
        }
    }
    cout<<ans <<endl;

    return 0;
}