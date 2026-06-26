#include<bits/stdc++.h>
using namespace std;

int main() {
    int s,n; cin >> s >> n;
    vector<pair<int,int>>v;
     for(int i=0; i<n; i++){
         int xi,yi;
         cin >> xi >>yi;
         v.push_back({xi,yi});
    }
    sort(v.begin(),v.end());
    bool defeat = true;
    for(auto x : v){
        if(s>x.first){
            s+=x.second;
        }
        else{
            defeat= false;
        }
    }
    if(defeat) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
    return 0;
}