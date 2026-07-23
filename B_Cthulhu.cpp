#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visited[105];
vector<int> adj[105];
int cnt;

void dfs(int src){
    visited[src] = true;
    
    for(auto child : adj[src]){
          if(!visited[child]){
            dfs(child);
        }
    }
}

int main() {
    cin >> n>> m;
    int edge = m;
    while (m--)
    {
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    memset(visited,false,sizeof(visited));
    cnt =0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }
    if(cnt==1 && edge==n){
        cout<<"FHTAGN!" <<endl;
    }else{
        cout<<"NO" <<endl;
    } 
    return 0;
}