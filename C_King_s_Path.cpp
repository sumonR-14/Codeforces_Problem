#include<bits/stdc++.h>
using namespace std;
set<pair<long long, long long>> allowed;
set<pair<long long, long long>> visited;

vector<pair<long long,long long>> d = {
    {-1,-1},{-1,0},{-1,1},
    {0,-1},         {0,1},
    {1,-1},{1,0},{1,1}
};

map<pair<long long,long long>,long long> level;

void bfs(long long si,long long sj,long long ei, long long ej){
     queue<pair<long long , long long>> q;
     q.push({si,sj});
     visited.insert({si,sj});
     level[{si,sj}]=0;

     while (!q.empty())
     {
        pair<long long , long long> par = q.front();
        q.pop();
        
        long long par_i = par.first;
        long long par_j = par.second;

        if(par_i==ei && par_j == ej){
            cout<<level[{par_i,par_j}] <<endl;
            return;
        }
        
         for(int i =0; i<8; i++){
            long long ci = par_i +d[i].first;
            long long cj = par_j +d[i].second;

            pair<long long, long long> child = {ci,cj};
            if(allowed.count(child) && !visited.count(child)){
                q.push(child);
                visited.insert(child);
                level[child] = level[par]+1;
            }
        }         
}
  cout<<-1 <<endl;
}

int main() {
    long long x0,y0,x1,y1;
    cin >> x0 >> y0 >> x1 >> y1;
    long long n; cin >> n;
    while(n--){
        long long r,a,b; cin >> r >> a >>b;
        for(long long col =a; col <=b; col++){
            allowed.insert({r,col});
        }
    }
    bfs(x0,y0,x1,y1);

    return 0;
}