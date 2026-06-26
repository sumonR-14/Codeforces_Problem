#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int a[7];
        int mx = INT_MIN;
        int sum = 0;
        for(int i=0; i<7; i++){
             cin>>a[i];
             if(a[i]>mx){
                mx = a[i];
             }
             sum += (a[i]*-1);
        }
        cout<<sum+mx*2 <<endl;
    }
    
    return 0;
}