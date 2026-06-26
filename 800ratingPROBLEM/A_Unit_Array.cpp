#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        int cnt2 =0,cnt1=0;
        for(int i=0; i<n; i++){
          if(a[i]==-1) cnt2++;
          else cnt1++;
        }
        int op=0;
        while (cnt1<cnt2 || cnt2 % 2 !=0)
        {
            cnt1++;
            cnt2--;
            op++;
        }
        cout<<op <<endl;
       
    }
    
    return 0;
}