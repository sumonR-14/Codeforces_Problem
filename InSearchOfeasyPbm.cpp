#include<iostream>
using namespace std;
int main(){
    int n,level;
    cin >> n;
   
    bool hard = false;

    for(int i=1; i<=n;i++){
        cin >> level;
        if(level==1){
            hard = true;
            break;
        }
    }

    if(hard){
         cout<<"HARD";   
    }
    else{
       cout<<"EASY";
    }

    return 0;
}