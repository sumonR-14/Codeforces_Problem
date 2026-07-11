#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    
    while (t--)
    {
        string st; cin >> st;
        long long ans =0;
        if(st[0]=='u'){
            st[0]='s';
            ans++;
        }
        if(st.back()=='u'){
            st.back()='s';
            ans++;
        }
        vector<pair<char,int>>v(1,{'s',1});
        for(int i=1;i<st.size();i++){
           if(st[i]==v.back().first) v.back().second++;
           else v.push_back({st[i],1});
        }
        for(int i=1; i<v.size(); i+=2){
            ans += v[i].second/2;
        }
        cout<<ans <<endl;
    }
    
    return 0;
}