#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>> t;
    while (t--)
    {
        long long x,y,a,b;
        cin>> x >> y >> a >>b;
        if(a>=b){
            long long ans = abs(x-y)*a + b*min(x,y);
            cout<<ans <<endl;
        }
        else if(b>a){
            long long ans = abs(x-y)*a + b*min(x,y);
            long long result = (x+y)*a;
            cout<<min(ans,result) <<endl;
        }
    }
    
    return 0;
}