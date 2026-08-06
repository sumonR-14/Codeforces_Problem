#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int cnt =0;
        
        while (a!=b && b!=c && c!=a)
        {
            if(a>b && a>c) a--;
            else if( b>c && b>a) b--;
            else c--;

            if((a<b && a<c)) a++;
             else if( b<c && b<a) b++;
            else c++;

            cnt++;
            
        }
        cout<<cnt <<endl;
        
    }
    
    return 0;
}