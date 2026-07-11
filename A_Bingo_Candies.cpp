#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        int row =0, col =0;
        for(int i=0; i<n; i++){
            bool same = true;
            for(int j=0; j<n; j++){
                if(a[i][j] != a[i][0]){
                    same = false;
                }
            }
            if(same)row++;
        }
          for(int i=0; i<n; i++){
            bool same = true;
            for(int j=0; j<n; j++){
                if(a[i][j] != a[0][j]){
                    same = false;
                }
            }
            if(same)col++;
        }

        if(row>=2 || col>=2){
            cout<<"NO" <<endl;
        }
        else cout<<"YES" <<endl;
    }
    
    return 0;
}