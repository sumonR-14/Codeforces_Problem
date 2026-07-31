#include<bits/stdc++.h>
using namespace std;
vector<int>adj_list[100005];
bool vis[100005];
long long  c[100005];
long long mn;
int n,m;

void dfs(int i){
    vis[i] = true;

    mn = min(mn,c[i]);
    for(int child : adj_list[i]){
        if(!vis[child]){
            dfs(child);
            vis[child]=true;
        }
    }
}

int main() {
    cin >> n >>m;

    for(int i=1; i<=n; i++){
        cin >> c[i];
    }
    for(int i=1; i<=m; i++){
        int x,y;
        cin >> x >>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    memset(vis,false,sizeof(vis));
    long long ans =0;
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            mn = c[i];
            dfs(i);
            ans += mn;
        }
    }
    cout<<ans <<endl;
    return 0;
}