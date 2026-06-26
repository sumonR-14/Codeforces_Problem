#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >>v[i];
        }
        int cnt0=0,cnt_1 =0;
        for(int i=0; i<n; i++){
            if(v[i]==0){
                cnt0++;
            }
            else if(v[i]==-1){
                cnt_1++;
            }
        }
        int z= 0;
        if(cnt_1%2!=0){
            z+=2;
        }else{
            z =0;
        }
        cout<<cnt0+z <<endl;
    }
    return 0;
}