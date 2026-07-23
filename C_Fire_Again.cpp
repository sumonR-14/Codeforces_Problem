#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visited[2005][2005];
int level[2005][2005];
vector<pair<int,int>> d ={{0,-1},{0,1},{-1,0},{1,0}};

bool validIndex(int i, int j){
    if(i<1 || i>n || j<1 || j>m){
        return false;
    }
    return true;
}

void bfs( queue<pair<int,int>> &q){

    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        for(int i=0; i<4; i++){
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if(validIndex(ci,cj) && !visited[ci][cj]){
                q.push({ci,cj});
                 visited[ci][cj] = true;
                 level[ci][cj] = level[par_i][par_j] +1;
            }
        }
    }
    
}


int main() {
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    cin >> n >>m;
    int k ; cin >> k;
    memset(visited,false,sizeof(visited));
    memset(level,-1,sizeof(level));
    
    queue<pair<int,int>> q;

    for(int i=0; i<k; i++){
          int si,sj; cin >> si >> sj;
            q.push({si,sj});
            visited[si][sj] = true;
            level[si][sj] =0;    
    }
    bfs(q);
    int mx =-1;
    int ansx=1,ansy=1;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(level[i][j]>mx){
                mx = level[i][j];
                ansx=i;
                ansy =j;
            }
        }
    }
    cout<< ansx <<" " <<ansy <<endl;
    return 0;
}