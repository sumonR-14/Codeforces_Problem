#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >>t;
    while(t--){
        int n,m,l,r;
        cin >> n>>m >>l  >>r;
        int l1,r1;
        if(m<=r){
            l1=0;
            r1 =m;
        }
        else if(m>r){
            r1 = r;
            l1 = r-m;
        }
        cout<<l1 <<" " <<r1 <<endl;
    }
    return 0;
}