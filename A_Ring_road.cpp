#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>adj[105];
    map<pair<int,int>,int>cost;
    for(int i=0; i<n; i++){
        int a,b,c; cin >> a>>b >>c;
        adj[a].push_back(b);
        adj[b].push_back(a);

        cost[{a,b}] =c;
    }
    vector<int>cycle;
    int prev =-1;
    int cur =1;

    while (true)
    {
        cycle.push_back(cur);
        int nxt;

        if(adj[cur][0] != prev)
          nxt = adj[cur][0];
        else 
          nxt = adj[cur][1];
          
          prev =cur;
          cur = nxt;

          if(cur==1) break;
    }
      int cw = 0;

    for(int i = 0; i < n; i++)
    {
        int u = cycle[i];
        int v = cycle[(i + 1) % n];

        if(cost.count({u, v}) == 0)
            cw += cost[{v, u}];
    }
      int ccw = 0;

    for(int i = 0; i < n; i++)
    {
        int v = cycle[i];
        int u = cycle[(i + 1) % n];

        if(cost.count({u, v}) == 0)
            ccw += cost[{v, u}];
    }

    cout<<min(cw,ccw) <<endl;
    
    return 0;
}