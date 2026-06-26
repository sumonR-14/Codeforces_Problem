#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while (t--)
    {
        string s; cin >>s;
        string x ="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='p'){
                s[i] = 'q';
                x += s[i];
            }
            else if(s[i]=='q'){
                s[i] = 'p';
                x += s[i];
            }
            else{
                x += s[i];
            }
        }
        reverse(x.begin(),x.end());
        cout<<x <<endl;
    }
    
    return 0;
}