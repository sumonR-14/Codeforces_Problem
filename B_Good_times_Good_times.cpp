#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        long long x; cin>> x;
        string digits = to_string(x);
        string s = "1";
        s += string(digits.size()-1,'0');
        s +="1";
        cout<<s <<endl;

    }
    
    return 0;
}