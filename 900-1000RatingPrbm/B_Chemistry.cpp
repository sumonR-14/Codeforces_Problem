#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >>k;
        string s; cin >>s;
        map<char,int>mp;
        for(int i=0; i<n; i++){
            char c = s[i];
            mp[c]++;
        }
        int min_dlt =0;
        for(auto it : mp){
            int cnt = it.second;
            int x = cnt%2;
            min_dlt += x;
        }

        if(min_dlt==0){
            cout<<"YES" <<endl;
            continue;
        }
        min_dlt--;

        if(min_dlt>k){
            cout<<"NO" <<endl;
        }
        else{
            cout<<"YES" <<endl;
        }
    }
    
    return 0;
}