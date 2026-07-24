#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long n,k,b,s;
        cin >> n >> k >> b >> s;
        long long minS = k*b;
        long long maxS = k*b + n*(k-1);
        if(s<minS || s> maxS){
            cout<<-1 <<endl;
        }
        else{
            vector<long long>ans(n,0);
            ans[0] = minS;
            s -= minS;
            for(int i=0; i<n; i++){
                long long add = min(k-1,s);
                ans[i] += add;
                s -= add;
            }
            for(int i=0; i<n; i++){
                cout<<ans[i] <<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}