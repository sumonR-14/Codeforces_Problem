#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string ans ="";
        string word;
        while (ss >> word)
        {  
            ans += word[0];
        }
        cout<<ans <<endl;
    }
    return 0;
}