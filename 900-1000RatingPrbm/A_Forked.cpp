#include<bits/stdc++.h>
using namespace std;

int dx[4]={-1,1,-1,1},dy[4] = {-1,-1,1,1};

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long a,b,xk,yk,xq,yq;
        cin >> a >> b >>xk >> yk >> xq >> yq;
        set<pair<int,int>>kingHits,queenHits;

        for(int i=0; i<4; i++){
            kingHits.insert({xk+dx[i]*a,yk+dy[i]*b});
            kingHits.insert({xk+dx[i]*b,yk+dy[i]*a});

            queenHits.insert({xq+dx[i]*a,yq+dy[i]*b});
            queenHits.insert({xq+dx[i]*b,yq+dy[i]*a});
        }
        int ans =0;
        for(auto position : kingHits){
            if(queenHits.find(position) != queenHits.end()){
                ans++;
            }
        }
        cout<<ans <<endl;
    }
    
    return 0;
}