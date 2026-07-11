#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n,c,b;
        cin >> n >> c >>b;
        string s="";
        for(int i=0; i<n; i++){
            s += ('a' + (i%b));
        }
        cout<<s <<endl;
    }
    
    return 0;
}