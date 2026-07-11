#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int expected = n;
        int i=0;
        
        while(i<n && a[i]==expected){
            expected--;
            i++;
        }

        if(i==n){
            for(int x : a) cout<<x <<" ";
            cout<<endl;
            continue;
        }

        int pos = -1;
        for(int j=i; j<n; j++){
            if(a[j]==expected){
                pos = j;
                break;
            }
        }

        reverse(a.begin()+i,a.begin()+pos+1);
         for(int x : a) cout<<x <<" ";
            cout<<endl;
    }
    
    return 0;
}