#include<bits/stdc++.h>
using namespace std;
int r,c;
char grid[505][505];
vector<pair<int,int>> movement ={{0,-1},{0,1},{1,0},{-1,0}};

bool valid(int i,int j){
    if(i<0 || i>=r || j<0 || j>=c )
    return false;

    return true;
}

bool protectWolf(int pi, int pj){
     for(int i=0; i<4; i++){
        int ci =pi + movement[i].first;
        int cj =pj + movement[i].second;
        if(!valid(ci,cj)) continue;
        if(grid[ci][cj]=='S') return false;

        if(grid[ci][cj]=='.')
          grid[ci][cj]='D';
     }
     return true;
}

int main() {
    cin >> r >>c;
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            cin >> grid[i][j];
        }
    }
    bool ok = true;
      for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            if(grid[i][j]=='W'){
                if(!protectWolf(i,j)){
                    ok = false;
                    break;
                }
            }
        }
    }
    
    if(!ok){
        cout<<"No" <<endl;
    }else{
        cout<<"Yes"<<endl;
          for(int i=0;i<r;i++){
           for(int j=0; j<c;j++){
             cout << grid[i][j];
        }
        cout<<endl;
      }
    }
    
    return 0;
}