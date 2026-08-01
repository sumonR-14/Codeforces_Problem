#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a,b; cin >> a >> b;
    vector<long long> c;
    while(b>=a)
    {
        c.push_back(b);
        if(b==a) break;
        if(b%2 ==0) b /=2;
        else if( b%2 == 1) b /= 10;
        else break;
    }
    if(b != a){
        cout<<"NO" <<endl;
    }else{
        reverse(c.begin(),c.end());
        cout<<"YES"<<endl;
        cout<<c.size() <<endl;
        for(long long x : c){
            cout<<x <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
