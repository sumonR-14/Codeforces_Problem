#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        string s,t;
        cin >> s >>t;

        vector<int>fre_t(26,0);
        for(int i=0; i<t.size(); i++){
            fre_t[t[i]-'A']++;
        }
        for(int i=s.size()-1; i>=0; i--){
            if( fre_t[s[i]-'A']>0)
             fre_t[s[i]-'A']--;
             else
             s[i] ='.';
        }

        string st ="";
        for(int i=0; i<s.size();i++){
            if(s[i] != '.'){
                st += s[i];
            }
        }

        if(st==t)cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
    
    return 0;
}