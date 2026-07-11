#include<bits/stdc++.h>
using namespace std;

int n,m;
int grid[1005][1005];
bool visited[1005][1005];
int mx,sum;
vector<pair<int,int>> movem ={{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int i, int j){
    if(i<1 || i>n || j<1 || j>m)
     return false;
    return true; 
}

void dfs(int si,int sj){
    visited[si][sj] = true;
    sum += grid[si][sj];

    for(int i=0; i<4; i++){
        int ci = si + movem[i].first;
        int cj = sj + movem[i].second;

        if(valid(ci,cj) && !visited[ci][cj] && grid[ci][cj]>0){
            dfs(ci,cj);
        }
    }
}

int main() {
    int t; cin>>t;
    while (t--)
    {
      cin >> n >>m;
      for(int i=1;i<=n;i++){
        for(int j=1; j<=m; j++){
            cin >> grid[i][j];
        }
      }  
      memset(visited,false,sizeof(visited));
      mx = 0;
      for(int i=1;i<=n;i++){
        for(int j=1; j<=m; j++){
            sum =0;
            if(grid[i][j]>0){
                dfs(i,j);
                mx = max(mx,sum);
            }
        }
      } 
      cout<<mx <<endl;  
    }
    
    return 0;
}