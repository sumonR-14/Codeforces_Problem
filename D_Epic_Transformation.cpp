#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        map<int,int>mp;
        for(int i=0; i<n; i++){
           cin >>  a[i];
           mp[a[i]]++;
        }
        int mx =0;
        for(auto x : mp){
            mx = max(mx,x.second);
        }
        if(mx > n- mx){
            cout<< mx - (n-mx) <<endl;
        }
        else cout<< n%2 <<endl;
    }
    
    return 0;
}