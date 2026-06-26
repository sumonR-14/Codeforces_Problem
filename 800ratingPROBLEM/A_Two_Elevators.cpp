#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long a,b,c,z;
        cin >> a >> b >> c;
        long long fst = a-1;
        z =abs(b-c);
        long long snd = c - 1;
        if(fst<snd+z) cout<<1 <<endl;
        else if(fst>snd+z) cout<<2 <<endl;
        else  if(fst==snd+z) cout<<3 <<endl;
    }
    
    return 0;
}