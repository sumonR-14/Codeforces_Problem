#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];

void dfs(int src){
    visited[src]= true;

    for(auto child : adj[src]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int main() {
    int n; cin >> n;
    vector<pair<int,int>> point(n);
    for(int i=0; i<n;i++){
      cin >> point[i].first >> point[i].second;
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(point[i].first== point[j].first ||
              point[i].second == point[j].second){
                 adj[i].push_back(j);
                 adj[j].push_back(i);
            }
        }
    }
    memset(visited,false,sizeof(visited));
    int component =0;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i);
            component++;
        }
    }
    cout<<component-1 <<endl;
    return 0;
}