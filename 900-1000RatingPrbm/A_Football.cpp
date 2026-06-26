#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    map<string,int>mp;
    for(int i=0; i<t; i++){
        string s;
        cin >>s;
        mp[s]++;
    }
    string most_fre_srg ="";
    int max_freq =0;
    for(auto &p :mp){
        if(p.second>max_freq){
            max_freq = p.second;
            most_fre_srg = p.first;
        }
    }
    cout<<most_fre_srg <<endl;

    return 0;
}