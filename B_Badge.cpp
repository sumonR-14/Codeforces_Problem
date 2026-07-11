#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
bool pathvis[1005];
vector<int>adj_list[1005];
int ans;

void dfs(int src){
    
    if(ans != -1) return;
    visited[src] = true;
    pathvis[src] = true;

    for(int child: adj_list[src]){
        
        if(visited[child] && pathvis[child]){
            ans = child;
            return;
        }
        else if(!visited[child]){
             dfs(child);
        }
    }
    pathvis[src] = false;
}


int main() {
    int n;cin>>n;
    for(int i=1; i<=n; i++){
        int pi; cin >> pi;
        adj_list[i].push_back(pi);
    }
   
    for(int i=1; i<=n;i++){
         memset(visited,false,sizeof(visited));
         memset(pathvis,false,sizeof(pathvis));
         ans =-1;
         dfs(i);
         cout<<ans <<" ";
    }
    return 0;
}