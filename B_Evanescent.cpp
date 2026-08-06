#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin>> s;
        int blk = 1;
        for(int i=1; i<n; i++){
            if(s[i] != s[i-1]){
                blk++;
            }
        }
        int ans = blk;
        for(int i=1; i<n-1; i++){
            if(s[i-1]==s[i+1] && s[i] != s[i-1]){
                ans = min(ans ,blk-2);
            }
            else  if(s[i]!=s[i-1] && s[i] != s[i+1]){
                ans = min(ans ,blk-1);
            }
        }
        cout<<ans <<endl;
    }
    
    return 0;
}