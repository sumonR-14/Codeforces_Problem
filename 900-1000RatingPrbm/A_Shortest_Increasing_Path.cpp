#include<iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        long long x,y;
        cin >>x >>y;
        if(x<y) cout<<"2"<<endl;
        else if(x>y){
            if((x-y)*y>=x) cout<<"3"<<endl;
            else cout<<"-1"<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}