#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int  cnt =0,balance =0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='('){
                balance++;
            }
            else if(s[i]==')') balance--;
            if(balance<0){
                cnt++;
                balance =0;
            }
        }
        cout<< cnt <<endl;
    }
    
    return 0;
}