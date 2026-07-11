#include<iostream>
using namespace std;
int main(){
    int n,p,q,level;
    cin >>n >>p;
    bool arr[101]={false};

    while(p--){
        cin >> level;
        arr[level]=true;
    }
    cin >>q;
     while(q--){
        cin >> level;
        arr[level]=true;
    }

    bool all_done = true;

    for(int i =1; i<=n; i++){
        if(!arr[i]){
            all_done = false;
            break;
        }
    }
    if(all_done){
        cout<<"I become the guy" <<endl;
    }
    else{
        cout<<"Oh,my keyboard" <<endl;
    }

    return 0;
}