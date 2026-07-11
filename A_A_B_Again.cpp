#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x = n/10;
        int r = n%10;
        cout<<(x+r) <<endl;
    }
    return 0;
}