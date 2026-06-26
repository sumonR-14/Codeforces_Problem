#include<bits/stdc++.h>
using namespace std;

int main() {
  
    int n,m; cin >> n >>m;
    map<string,string>mp;
    for(int i=0; i<m;i++){
        string ai,bi;
        cin >> ai >> bi;
        if(ai.size()<=bi.size())
           mp[ai] = ai;
        else mp[ai] = bi;   
    }
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        cout<<mp[s] <<" ";
    }
    cout<<endl;
    return 0;
}