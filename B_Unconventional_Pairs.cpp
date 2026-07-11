#include<bits/stdc++.h>
using namespace std;

int main() {
   int t; cin >> t;
   while (t--)
   {
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int mx = INT_MIN;
    for(int i =0; i<n; i+=2){
        int dif = abs(a[i]-a[i+1]);
        mx = max(mx,dif);
    }
    cout<<mx <<endl;
    
   }
   
    return 0;
}