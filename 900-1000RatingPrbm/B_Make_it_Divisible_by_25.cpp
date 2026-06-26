#include<bits/stdc++.h>
using namespace std;

int minOP(string n, string val){
    int op =0;
    int chcker_index = val.size()-1;//1
    for(int i=n.size()-1; i>=0; i--){
        if(n[i]==val[chcker_index]){
            chcker_index--;
            if(chcker_index<0)break;
        }else{
            op++;
        }
    }

    if(chcker_index>=0)
      op = INT_MAX;
      return op;
}

int main() {
    int t; cin >> t;
    while (t--)
    {
        string n; cin >> n;
        vector<string> possible_values={"00","25","50","75"};
        int ans = INT_MAX;

        for(auto val : possible_values){
            ans = min(ans,minOP(n,val));
        }
        cout<<ans <<endl;
    }
    
    return 0;
}