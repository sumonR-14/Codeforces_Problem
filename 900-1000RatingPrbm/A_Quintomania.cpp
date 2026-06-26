#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--)
  {
     int n; cin >>n;
     vector<int> a(n);
     for(int i=0; i<n;i++)cin >> a[i];
     bool notG = false;
     for(int i=0; i<n-1;i++){
        if(abs(a[i]-a[i+1])==5 || abs(a[i]-a[i+1])==7){
            notG = true;
             continue;
        }
        else{
           notG = false;
           break;
        }
     }
     if(notG) cout<<"YES" <<endl;
     else  cout<<"NO" <<endl;

  }
    return 0;
}