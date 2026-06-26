#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<long long>a(n);
        for(int i=0; i<n; i++) cin >>a[i];
        bool sorted = true;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                sorted = false;
                break;
            }
        }

        if(!sorted){
            cout<<0 <<endl;
            continue;
        }
        long long min_dif = LLONG_MAX;
        for(int i=0; i<n-1; i++){
            long long diff = a[i+1] - a[i];
            min_dif = min(diff,min_dif);
        }
        cout <<(min_dif/2 +1) <<endl;
   
    }
    
    return 0;
}