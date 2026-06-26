#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        bool non_decreasing = true;
        for(int i=0; i<n; i++) cin >> a[i];

         for(int i=0; i<n-1; i++){
             if(a[i]>a[i+1]){
                non_decreasing = false;
                break;
             }
         }
         if(!non_decreasing)cout<<1 <<endl;
         else cout<<n <<endl;   
    }
    return 0;
}