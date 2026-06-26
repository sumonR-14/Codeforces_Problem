#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int seg = 0;
         for(int i=0; i<n; i++){
            if(a[i]!=0 && (i==0 || a[i-1]==0)){
                seg++;
            }
        }
        if(seg==1){
            cout<<1 <<endl;
        }
        else if( seg > 1)cout<<2 <<endl;
        else cout<<0 <<endl;
    }
    
    return 0;
}