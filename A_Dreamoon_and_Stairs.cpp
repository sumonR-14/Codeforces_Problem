#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin >> n >> m;
    int result = n/2 + n%2;
    while (result<=n)
    {
      if(result%m==0){
        cout<<result <<endl;
        return 0;
      }
      result++;
    }  

    cout<<-1 <<endl;
 
}