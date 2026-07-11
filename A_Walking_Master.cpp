#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>> t;
    while (t--)
    {
        long long sx,sy,dx,dy; cin >> sx >> sy >> dx >> dy;
        if(sy>dy){
            cout<<"-1" <<endl;
            continue;
        }
        int moves = dy-sy;
        sx += moves;
        if(sx<dx){
           cout<<"-1" <<endl;
            continue;
        }
        moves += (sx - dx);
        cout<< moves <<endl;
    }
    
    return 0;
}