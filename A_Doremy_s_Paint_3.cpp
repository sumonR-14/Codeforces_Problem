#include<bits/stdc++.h>
using namespace std;
void solve(){
        int n; cin >> n;
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
          cin >> a[i];
          mp[a[i]]++;
        }
        if(mp.size()>2){
          cout<<"No"<<endl;
          return;
        }
        else{
           if(mp.size()==1){
            cout<<"Yes"<<endl;
            return;
           }
           else if(mp.size()==2){
             auto it = mp.begin();
             int  c= it->second;
             it++;
             int d = it->second;
             if(n%2==0){
               if(c==d){
                cout<<"Yes" <<endl;
                return;
               }   
             }else{
               if(abs(c-d)==1){
                 cout<<"Yes" <<endl;
                 return ;
               }
             }
           }
        }
        cout<<"No"<<endl;
    }

int main() {
    int t; cin >> t; 
    while(t--) solve();
    return 0;
}