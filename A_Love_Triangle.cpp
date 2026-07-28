#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>a(n+1);
    for(int i=1; i<=n; i++)cin >> a[i];
    for(int i=1; i<=n; i++){
        int j = a[i];
        int k = a[j];
        if(a[k]==i){
            cout<<"YES"<<endl;
            return 0;
        }
    }
     cout<<"NO"<<endl;
    return 0;
}