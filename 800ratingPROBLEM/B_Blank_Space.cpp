#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        int cnt=0;
        int mx = 0;
         for(int i=0; i<n; i++){
            cin >>a[i];
            if(a[i]==0){
                cnt++;
            }
           else{
             cnt =0;  
           }
            mx = max(mx,cnt);
        }
        cout<<mx <<endl;
    }
    
    return 0;
}