#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        for(int i=1; i<s.size()-1;i++){
            if(s[i-1]=='1' && s[i+1]=='1'){
                s[i]='1';
            }
        }
        int cnt1 =0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='1')cnt1++;
        }

         for(int i=1; i<s.size()-1;i++){
            if(s[i-1]=='1' && s[i+1]=='1'){
                s[i]='0';
            }
        }
        int cnt =0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='1')cnt++;
        }

        cout<<cnt <<" " <<cnt1 <<endl;
    }
    
    return 0;
}