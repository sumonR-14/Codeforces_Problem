#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
       
        for(int i=0; i<n; i++) cin >>a[i];
        unordered_map<int,int>mp;
        for(int &x : a){
            mp[x]++;
        }
        int maxF =0;
        int ans = -1;
        for(auto &it :mp){
            if(it.second>maxF){
                maxF = it.second;
               ans = it.first;
            }
        }
        cout<<ans <<endl;
    }
    return 0;
}