#include<bits/stdc++.h>
using namespace std;

int main() {
     int t; cin >> t;
     while (t--)
     {
        string s; cin >> s;
        int i;
        for( i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                break;
            }
        }
        if(s[i]=='z'){
            s.insert(s.begin()+i+1,'x');
        }else{
              s.insert(s.begin()+i+1,'z');
        }
         cout<<s <<endl;
     }
     
    return 0;
}