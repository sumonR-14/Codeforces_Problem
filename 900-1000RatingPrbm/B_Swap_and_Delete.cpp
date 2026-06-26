#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int cnt1 =0,cnt0 =0;

        for(int i=0; i<s.size();i++){
            if(s[i]=='1')cnt1++;
            else cnt0++;
        }
        int tt=0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='1' && cnt0>0){
                cnt0--;
                tt++;
            }
            else if(s[i]=='0' && cnt1>0){
                cnt1--;
                tt++;
            }
            else{
                break;
            }
        }
        cout<<s.size()-tt <<endl;
    }
    
    return 0;
}