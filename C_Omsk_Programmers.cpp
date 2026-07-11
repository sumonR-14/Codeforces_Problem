#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long a,b,x; cin >> a >>b >>x;
        vector<pair<long long,int>>A,B;

        long long current =a;
        int d=0;
        while (true)
        {
            A.push_back({current,d});
            if(current==0)break;
            current/=x;
            d++;
        }

        current=b; d=0;
        while (true)
        {
            B.push_back({current,d});
            if(current==0)break;
            current/=x;
            d++;
        }
        long long ans = (long long)4e18;
        for(auto &p1:A){
            long long v = p1.first;
            int diffa =p1.second;
            for(auto &p2:B){
                long long w = p2.first;
                int diffb = p2.second;
                ans = min(ans,(long long)diffa+(long long)diffb+llabs(v-w));
            }
        }
        cout<<ans <<endl;
        
    }
    
    return 0;
}