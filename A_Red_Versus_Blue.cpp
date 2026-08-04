#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n,r,b;
        cin >> n >> r >> b;
        int base = r/(b+1);
        int extra = r%(b+1);

        for(int i=0; i<=b; i++){
            for(int j=0; j<base; j++)
              cout <<'R';

              if(extra>0){
                 cout <<'R';
                 extra--;
              }

              if(i<b)
                 cout<<'B';
        }

        cout<<endl;
        
    }
    
    return 0;
}