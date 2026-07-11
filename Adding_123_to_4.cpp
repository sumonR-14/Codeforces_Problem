#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--)
  {
    int x,y,z; cin >> x >>y >>z;
    int ans2 = y/2;
    int ans1 =0;
    if(x==z){
        ans1 += z;
    }
    else if(x>z){
        ans1 += z;
    }
    else{
        ans1 += x;
    }

    cout<<ans1+ans2 <<endl;
  }
  
    return 0;
}