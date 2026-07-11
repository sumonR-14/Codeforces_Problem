#include<iostream>
#include<string>
using namespace std;

int main() {
     long long int t;
     cin >> t;
     
     while(t--){
        string s;
        cin >>s;
        for (int i = 0; i<s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        if(s=="yes")cout<<"YES" <<endl;
        else cout<<"NO"<<endl;
        
     }
    return 0;
}