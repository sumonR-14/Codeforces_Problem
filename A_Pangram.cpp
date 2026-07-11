#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;cin>>n;
   string s; cin>>s;
   for(int i=0; i<s.size();i++){
     s[i] =towlower(s[i]);
   }
   bool found = true;
   for(char c='a'; c<='z';c++){
      bool tracer = false;
      for(int i=0; i<s.size();i++){
         if(s[i]==c){
            tracer = true;
            break;
         }
      }
      if(!tracer){
         found = false;
         break;
      }
   }
   if(found){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
    return 0;
}