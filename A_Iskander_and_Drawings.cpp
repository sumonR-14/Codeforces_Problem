#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s;
        cin >> s;
        int cnt =0;
        int mx =0;
        for(int i=0; i<n; i++){
            if(s[i]=='#'){
                cnt++;
            }else{
                mx = max(mx,cnt);
                cnt =0;
            }
        }
         mx = max(mx,cnt);
        int ans = ceil(mx/2.0);
        cout<<ans <<endl;
    }
    
    return 0;
}