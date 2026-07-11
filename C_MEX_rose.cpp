#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int>a(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin >>a[i];
            mp[a[i]]++;
        };
       int missing=0;
       for(int i=0; i<k; i++){
          if(mp[i]==0){
            missing++;
          }
       }
       int countK = mp[k];
       cout<<max(missing,countK)<<endl;

    }
    return 0;
}