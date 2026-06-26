#include<iostream>
using namespace std;

int main() {
    int t,x,y,z;
    cin >>t;
    while(t--){
        cin >>x >>y;
        z = 50-x;
        if((y*2)<=z && z<=(y+5)*2){
            cout <<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}