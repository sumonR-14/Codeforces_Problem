#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[100005];
int a[100005];
int ans =0;

void dfs(int node,int parent, int consecuitive){
        if(a[node]==1){
            consecuitive++;
        }else{
            consecuitive=0;
        }

        if(consecuitive>m){
                return;
         }
        
        bool leaf = true;

        for(auto child : adj[node]){
           if(child==parent){
              continue;
           }
           leaf = false;
           dfs(child,node,consecuitive);
        }
        if(leaf)ans++;


}

int main() {
    cin >> n >>m;
    for(int i=1; i<=n;i++) cin >> a[i];
    for(int i=0; i<n-1;i++){
        int x,y;
        cin >> x >>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,-1,0);
    cout<<ans <<endl;
    return 0;
}