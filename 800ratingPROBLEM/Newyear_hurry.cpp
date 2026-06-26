#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin >> n >>k;
    int z= 240-k;
    int solved =0;
    int time_spend =0;

    for(int i=1; i<=n; i++){
        time_spend += 5*i;
        if(time_spend>z){
            break;
        }
        solved++;
    }
    cout<<solved <<endl;
    return 0;
}