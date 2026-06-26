#include<iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--)
    {
        int a,b,c,d;
        cin >>a >>b >>c >>d;

        int a1 = min(a,b);
        int b1 = max(a,b);
        int c1 = min(c,d);
        int d1 = max(c,d);

        if(c1>a1 && d1<b1) cout <<"NO"<<endl;
        else if(c1<a1 && d1>b1) cout <<"NO"<<endl;
        else if(c1>a1 && c1>b1 && d1>a1 && d1>b1) cout <<"NO"<<endl;
        else if(c1<a1 && c1<b1 && d1<a1 && d1<b1) cout <<"NO"<<endl;
        else cout<<"YES" <<endl;
    }
    
    return 0;
}