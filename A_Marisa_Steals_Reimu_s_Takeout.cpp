#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin>> n;
        vector<int>a(n);
        int cnt0=0,cnt1=0,cnt2=0;
       
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==0)cnt0++;
            else if(a[i]==1)cnt1++;
            else if(a[i]==2) cnt2++;
        }
        int ans = cnt0;
        int p = min(cnt1,cnt2);
        ans += p;

        cnt1 -= p;
        cnt2 -= p;

        ans += cnt1/3;
        ans += cnt2/3;

        cout<<ans <<endl;
    }
    
    return 0;
}