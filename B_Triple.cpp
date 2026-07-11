#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        
        unordered_map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        bool found = false;
        for (int i=0; i<n; i++){
            if(mp[v[i]]>=3){
                cout<<v[i] <<endl;
                found = true;
                break;
            }
        }
        if(!found)  cout<<-1 <<endl;  
    }
    
    return 0;
}