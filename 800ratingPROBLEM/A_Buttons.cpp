#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long x,y,z; cin >> x >>y >>z;
        if(x==y){
            if(z%2!=0)cout<<"First" <<endl;
            else cout<<"Second" <<endl;
        }
        else if(x>y) cout<<"First" <<endl;
        else cout<<"Second" <<endl;
    }
    
    return 0;
}