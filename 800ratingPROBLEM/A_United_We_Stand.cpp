#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        vector<int> b,c;
        long long mx = *max_element(a.begin(),a.end());
        for(int i=0; i<n; i++){
            if(a[i]!=mx) b.push_back(a[i]);
            else c.push_back(a[i]);
        }

        if(b.size()==0) cout<<-1 <<endl;
        else{
            cout<<b.size() <<" " <<c.size() <<endl;
            for(int x : b){
                cout<<x <<" ";
            }
            cout<<endl;
            for(int y : c){
                cout<<y <<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}