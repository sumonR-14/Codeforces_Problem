#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        bool found = false;
        if(n==2){
            cout<<a[0] <<" " <<a[1] <<endl;
        }
        else{
             for(int i=0; i<n-2; i++){
                if((a[i]%a[i+1]) == a[i+2]){
                    found = true;
                }
                else{
                    found = false;
                    break;
                }
             }
             if(found){
                cout<<a[0] <<" " <<a[1] <<endl;
             }
             else{
                cout<<-1 <<endl;
             }
        }

    }
    
    return 0;
}