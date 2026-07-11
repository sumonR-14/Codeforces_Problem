#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int a,b,x,y;
        cin >> a>>b >>x >>y;
        int ans =0;
        if((a>=x && b>y) || (a>x && b>=y))ans+=2;
        if((b>=x && a>y) || (b>x && a>=y))ans+=2;
       
       cout <<ans <<endl;
    }
    return 0;
}