#include<bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--)
  {
    long long n,c1,c2;
    cin >> n;

    c1 = ceil(n*1.0/3*1.0);
    c2=(n-c1)/2;
    if((c1 + 2*c2)==n){
        cout<<c1 <<" " <<c2 <<endl;
    }else{
        cout<<c2 <<" " <<c1 <<endl;
    }

  }

    return 0;
}