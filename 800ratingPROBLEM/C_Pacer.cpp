#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,m,a,b; cin>>n>>m;
        int side=0,prevMin=0;
        for(int i=1;i<=n; i++){
            cin >> a >>b;
            int distance = a- prevMin;
            if((b-side)==0 && distance&1) m--;
            else if((b-side!=0 && !(distance&1))) m--;
            prevMin =a;
            side = b;
        }
        cout <<m <<endl;
    }
    return 0;
}