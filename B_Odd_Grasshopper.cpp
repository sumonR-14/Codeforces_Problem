#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        long long st,jm; cin >> st >> jm;
        long long ans;
        if(jm%4==1){
            ans = -jm;
        }
        else if(jm%4==2){
            ans = 1;
        }
        else if(jm%4==3){
            ans = jm +1;
        }
        else if(jm%4==0){
          ans =0;
        }

        if(st%2==0){
            ans = st + ans;
        }
        else{
            ans = st - ans;
        }

        cout<<ans <<endl;
    }
    
    return 0;
}