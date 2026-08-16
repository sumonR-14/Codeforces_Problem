#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int>a(m);
    int curr =1;
    long long ans =0;
    for(int i=0; i<m;i++){
        cin>>a[i];
        if(a[i]>=curr){
            ans += a[i] -curr;
        }
        else{
            ans += (n-curr)+ a[i];
        }
        curr = a[i];
    }
    cout<<ans <<endl;
    return 0;
}