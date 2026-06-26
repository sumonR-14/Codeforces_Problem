#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >>a[i];
        }
        bool all_odd = true,all_even =true;
         for(int i=0; i<n; i++){
            if(a[i]%2==0){
               all_odd =false;
            }
            else{
                all_even = false;
            }
        }
        if(all_even || all_odd){
             for(int i=0; i<n; i++){
            cout <<a[i] <<" ";
          }
          cout<<endl;
        }else{
            sort(a.begin(),a.end());
             for(int i=0; i<n; i++){
            cout<<a[i] <<" ";
           }
           cout<<endl;
        }

    }
    return 0;
}