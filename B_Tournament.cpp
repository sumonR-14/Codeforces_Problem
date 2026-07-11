#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){
        int n,j,k;
        int mx =0;
        cin >> n >> j >>k;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            mx = max(mx,v[i]);
        }
        if(k>1 || mx == v[j-1] ) cout<<"YES" <<endl;
        else cout <<"NO" <<endl;
        
    }
    return 0;
}