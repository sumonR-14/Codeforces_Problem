#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        long long n; cin>>n;
        int x= n-2;
        if (n==3){
            cout<<1<<endl;
        }
       else if(n%2==0){
           long long ans =(long long)floor(x/2);
            cout<<ans<<endl;
        }
        else{
            long long ans =(long long)ceil(x/2.0);
            cout<<ans <<endl;
        }
    }
    return 0;
}