#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int a[8][8];
        string ans ="";
        for(int i=0; i<8; i++){
            for(int j =0; j<8; j++){
                char c ; cin >> c;
                if(c =='.') continue;
                else ans += c;
            }
        }
        cout<<ans <<endl;
    }
    
    return 0;
}