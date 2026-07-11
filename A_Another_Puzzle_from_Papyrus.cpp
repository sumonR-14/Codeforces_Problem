#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n,c; cin >> n >>c;
        vector<int>a(n),b(n);
        for(int i=0; i<n;i++)cin>>a[i];
        for(int i=0; i<n;i++)cin>>b[i];
        
            int sum1=0,sum2=0;
            bool ok = true, ok1 = true;
            for(int i=0; i<n;i++){
                if(a[i]<b[i]){
                   ok = false;
                   break;
                }
                sum1 += (a[i]-b[i]);
            }
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            for(int i=0; i<n;i++){
               if(a[i]<b[i]){
                ok1 = false;
                break;
               }
                sum2 += (a[i]-b[i]);
            }
            sum2 +=c;
            
            if(ok && ok1){
                cout<<min(sum1,sum2) <<endl;
            }
            else if(ok && !ok1){
                 cout<<sum1 <<endl;
            }
             else if(!ok && ok1){
                 cout<<sum2 <<endl;
            }
            else{
                cout<<-1 <<endl;
            }
        
    }

    return 0;
}