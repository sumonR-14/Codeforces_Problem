#include<bits/stdc++.h>
using namespace std;

int n,m;
char grid[105][105];
bool visited[105][105];
vector<pair<int,int>> movem ={{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int i, int j){
    if(i<1 || i>n || j<1 || j>m)
     return false;
    return true; 
}

void dfs(int si,int sj,char clr){
    visited[si][sj] = true;
    grid[si][sj] = clr;

    char nextClr;
    if(clr == 'B'){
        nextClr = 'W';
    }
    else nextClr = 'B';
    
    for(int i=0; i<4; i++){
        int ci = si + movem[i].first;
        int cj = sj + movem[i].second;
        
        if(valid(ci,cj) && !visited[ci][cj] && grid[ci][cj]=='.'){
            dfs(ci,cj,nextClr);
        }
    }
}

int main() {
    cin >> n >>m;
      for(int i=1;i<=n;i++){
        for(int j=1; j<=m; j++){
            cin >> grid[i][j];
        }
      }  
      memset(visited,false,sizeof(visited));
      
      for(int i=1;i<=n;i++){
        for(int j=1; j<=m; j++){
           if(!visited[i][j] && grid[i][j] == '.'){
             dfs(i,j,'B');
           }
        }
      } 
       
      for(int i=1;i<=n;i++){
        for(int j=1; j<=m; j++){
           cout<<grid[i][j];
        }
        cout<<endl;
      } 
    return 0;
}