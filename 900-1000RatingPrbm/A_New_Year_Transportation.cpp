#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[30005];
bool vis[30005];

void dfs(int src){
    vis[src] = true;

    for(int child : adj_list[src]){
        if(!vis[child])
          dfs(child);
    }
}

int main() {
    int n,t; cin >> n >> t;
    for(int i=1; i<=n-1; i++){
        int a; cin >> a;
        adj_list[i].push_back(i+a);
    }
    memset(vis,false,sizeof(vis));
    dfs(1);
    if(vis[t])cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
    return 0;
}