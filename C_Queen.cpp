#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin >> n;
    vector<int>c(n+1),parent(n+1);
    vector<vector<int>> child(n+1);
    int root =-1;
    for(int i=1; i<=n; i++){
         cin >> parent[i] >> c[i];
         if(parent[i]==-1){
            root = -1;
         }else{
            child[parent[i]].push_back(i);
         }
    }
    vector<int> ans;
    for(int i=1; i<=n; i++){
        if(i == root)continue;
        if(c[i]==0) continue;

        bool ok = true;
        for(int v: child[i]){
                  if(c[v] == 0){
                ok = false;
                break;
            }
         }
       
        if(ok){
            ans.push_back(i);
        }
    }
    if(ans.empty()) cout<<-1;
    else{
        for(int x : ans)
          cout<<x <<" ";
    }
    return 0;
}