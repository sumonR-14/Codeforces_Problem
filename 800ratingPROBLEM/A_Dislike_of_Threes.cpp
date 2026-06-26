#include<iostream>
using namespace std;
int main(){
    int t,k;
    cin >>t;
    while(t--){
        cin >>k;
        int count =0;
        int i=1;
        while(true){
            if(i%3!=0 && i%10!=3){
                count++;
            }
            if(count==k){
                cout<<i <<endl;
                break;
            }
            i++;
        }
    }
    return 0;
}