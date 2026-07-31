#include<bits/stdc++.h>
using namespace std;

long long ceil_d (long long a,long long b){
     return (a+b-1)/b;
}

int main() {
    int t;cin >> t;
    while (t--)
    {
        long long x,y,k;
        cin >> x >> y >> k;

        long long gain = x-1;
        long long need = k*y + k -1;

        long long trade = 0;

        trade += ceil_d(need,gain);
        trade +=k;
        cout<<trade <<endl;
    }
    
    return 0;
}