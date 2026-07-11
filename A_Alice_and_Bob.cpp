#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while (t--)
    {
        int n;cin>>n;
        long long a; cin>>a;
        int count1=0,count2=0;
        vector<int>ar(n);
        for(int i=0; i<n; i++){
            cin >>ar[i];
        }
         for(int i=0; i<n; i++){
            if(ar[i]<a){
                count1++;
            }else if(ar[i]>a){
                count2++;
            }
        }

        if(count1>count2){
            cout<<a-1 <<endl;
        }else{
            cout<<a+1 <<endl;
        }
    }
    
    return 0;
}