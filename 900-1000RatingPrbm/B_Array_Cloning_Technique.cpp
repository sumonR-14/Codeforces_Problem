#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<long long> v(n);
        for(long long i=0; i<n; i++) cin>>v[i];
        map<long long,long long> mp;
        for(long long i=0; i<n; i++) mp[v[i]]++;

        long long curr_Hfq =0,op=0;
        for(auto x : mp){
            curr_Hfq = max(curr_Hfq,x.second);
        }
        
        while (curr_Hfq<n)
        {  
            op++; //first clone
            if(curr_Hfq*2 <=n){ // if need all copies
               op += curr_Hfq;
               curr_Hfq *= 2;
            }else{ // if need some copies
              op += (n-curr_Hfq);
              curr_Hfq =n;
            }
        }
        cout<<op <<endl;   
    }
    
    return 0;
}