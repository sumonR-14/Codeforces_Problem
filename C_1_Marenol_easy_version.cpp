#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string a,b;
        cin >> a >> b;

        int ae =0,ao=0;
        int be=0,bo=0;

        for(int i=0; i<n; i++){
            if(a[i]=='1'){
                if(i%2==0) ae++;
                else ao++;
            }
             if(b[i]=='1'){
                if(i%2==0) be++;
                else bo++;
            }
        }

        if(ae==be && ao ==bo){
            cout<<"YES" <<endl;
        }else cout<<"NO"<<endl;
    }
    
    return 0;
}