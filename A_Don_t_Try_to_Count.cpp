#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n,m; cin>>n >>m;
        string x,s; cin>> x >> s;
        bool ok = false;
        int cnt = 0;
        for(int i=0; i<6; i++){
            if(x.find(s) != string::npos){
                ok = true;
                break;
            }
            x += x;
            cnt++;
        }
          if(ok) cout<<cnt <<endl;
          else cout<<-1 <<endl;
    }
    
    return 0;
}