#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long a,b,c,d,cnt=0; cin >> a >>b >>c >> d;
        if(a<b)cnt++;
        if(a<c)cnt++;
        if(a<d)cnt++;
        cout<<cnt <<endl;
    }
    
    return 0;
}