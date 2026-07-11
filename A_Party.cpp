#include<bits/stdc++.h>
using namespace std;

vector<int>adj[2005];
int ans =0;

void dfs(int node,int depth){
    ans = max(ans,depth);

    for(int child : adj[node]){
        dfs(child,depth+1);
    }
}

int main() {
    int n; cin >> n;
    vector<int>roots;

    for(int i=1;i<=n;i++){
        int p; cin >> p;
        if(p==-1){
            roots.push_back(i);
        }else{
            adj[p].push_back(i);
        }
    }
    for(int root : roots){
        dfs(root,1);
    }
    cout<<ans <<endl;
    return 0;
}