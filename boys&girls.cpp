#include<iostream>
#include<string>
using namespace std;

int main(){
    string username;
    cin >>username;
    int count =0;
    for(int i=0; i<username.length();i++){
        bool duplicate = false;
        for(int j=0;j<i;j++){
            if(username[i]==username[j]){
                duplicate=true;
                break;
            }
        }
        if(duplicate ==false){
            count ++;
        }
    }

    if(count%2==0){
        cout<<"CHAT WITH HER!" <<endl;
    }
    else{
        cout<<"IGNORE HIM!" <<endl;
    }
     
    return 0;
}
