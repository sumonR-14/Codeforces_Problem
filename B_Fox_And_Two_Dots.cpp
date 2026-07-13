#include<bits/stdc++.h>
using namespace std;
int n,m;
char grid[55][55];
vector<pair<int,int>> movem ={{0,-1},{0,1},{-1,0},{1,0}};

int visited[55][55];
bool found = false;

bool valid(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m)
     return false;
    return true; 
}

void dfs(int si,int sj,int pi,int pj ){
    visited[si][sj] = true;
    
    for(int i=0; i<4; i++){
        int ci = si + movem[i].first;
        int cj = sj + movem[i].second;

        if(!valid(ci,cj)) continue;
        if(grid[ci][cj] != grid[si][sj]) continue;
        if(ci==pi && cj==pj) continue;
        if(visited[ci][cj]){
            found = true;
        }
        if(!visited[ci][cj]){
            dfs(ci,cj,si,sj);  
        } 
        if(found) return;
    }
}

int main() {
    cin >> n >>m;
    for(int i=0;i<n; i++){
        for(int j =0; j<m; j++){
            cin >> grid[i][j];
        }
    }
    memset(visited,false,sizeof(visited));
   
     for(int i=0;i<n; i++){
        for(int j =0; j<m; j++){

           if(!visited[i][j]){
            dfs(i,j,-1,-1);
           }

           if(found){
              cout<<"Yes" <<endl;
              return 0;
           }
        }
    }
    
    cout<<"No" <<endl;
    
    return 0;
}