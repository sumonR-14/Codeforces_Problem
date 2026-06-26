#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int count1=0,count0=0;
        int sz = s.size();
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') count1++;
            else count0++;
        }
        bool allOne = true;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                allOne = false;
                break;
            }
        }

        bool allZero = true;
          for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                allZero = false;
                break;
            }
        }
         if(allOne){
            cout<<count1*(count1-1) <<endl;
        }
         else if(allZero){
            cout <<count0 <<endl;
        }
        

    //    else if((sz%2==0) && count0==count1){
    //         cout<<sz*(sz/2) <<endl;
    //     }
        else{
            cout<<count1*(count1-1) + count0*(count1+1) <<endl;
        }

    //    else if((sz%2!=0) && count0>count1){
    //         cout<<(sz*(count0 -1))+1 <<endl;
    //     }
    //     else{
    //         cout<<count1*(sz-1) <<endl;
    //     }

    }
    
    return 0;
}