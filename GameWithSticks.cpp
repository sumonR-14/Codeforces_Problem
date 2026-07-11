#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int i=1;
    int rmvSticks=0;
    // continuous loop
    for(;;){
        if(n-i==0) break;
        if(m-i==0)break;
        i++;
        rmvSticks++;
    }

    if(rmvSticks%2==0){
        cout<<"Akshat";
       
    }else{
         cout<<"Malvika";
    }

    return 0;
}