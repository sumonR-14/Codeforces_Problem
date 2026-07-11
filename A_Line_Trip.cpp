#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int mxArdif = INT_MIN;
        for(int i=0; i<n-1; i++){
            int y = abs(a[i]-a[i+1]);
            mxArdif = max(mxArdif,y);
        }
        int mxFst = abs(a[0]-0);
        int mxLst = abs(x-a[n-1]);
        
        int ans = max({mxArdif,mxFst,mxLst*2});
        if(n==1){
            int d = max(mxFst,mxLst*2);
            cout<<d <<endl;
        }else{
            cout<<ans <<endl;
        }
    }
    return 0;
}