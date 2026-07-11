#include<bits/stdc++.h>
using namespace std;
int n;

bool visited[1005][1005];
bool blocked[1005][1005];

vector<pair<int,int>> moveQ ={{0,-1},{0,1},{-1,0},{1,0},{-1,1},{-1,-1},{1,-1},{1,1}};
vector<pair<int,int>> moveK ={{0,-1},{0,1},{-1,0},{1,0},{-1,1},{-1,-1},{1,-1},{1,1}};

bool valid(int i,int j){
    if(i<1 || i>n || j<1 || j>n)
      return false;
   return true;   
}

void dfs(int si,int sj){
    visited[si][sj] = true;

    for(int i=0; i<8; i++){
        int ci = si +moveK[i].first;
        int cj = sj + moveK[i].second;

        if(!visited[ci][cj] && valid(ci,cj) && !blocked[ci][cj]){
            dfs(ci,cj);
        }
    }
}

int main() {
    cin>>n;
    int ax,ay;
    cin >> ax >>ay;
    int bx,by;
    cin>> bx >>by;
    int cx,cy;
    cin >> cx >>cy;
    memset(visited,false,sizeof(visited));
    memset(blocked,false,sizeof(blocked));

    blocked[ax][ay] = true;
    for(int i=0;i<8; i++){
        int x = ax+moveQ[i].first;
        int y = ay + moveQ[i].second;

        while (valid(x,y))
        {
            blocked[x][y] = true;

            x += moveQ[i].first;
            y += moveQ[i].second;
        }
        
    }

    dfs(bx,by);

    if(visited[cx][cy]) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;

    return 0;
}