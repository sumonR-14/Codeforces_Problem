#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
   while(t--){
       int n,k; cin >> n >>k;
       string s; cin>>s;
       int count1=0,count0=0;
       for(int i=0; i<n; i++){
         if(s[i]=='0'){
            count0++;
         }else if(s[i]=='1'){
            count1++;
         }
       }
      
       int result =abs(count1 - count0)/2;
         if(k<result){
        cout<<"NO"<<endl;
       }
        else if( (k-result)%2==0){
            cout<<"YES" <<endl;
        }else{
            cout<<"NO"<<endl;
        }
   }
    return 0;
}