#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;

    string stoneClr;
    cin >> stoneClr;

    for(int i=0; i<n-1;i++){
        if(stoneClr[i]==stoneClr[i+1]){
            count++;
        }
    }
    cout<<count <<endl;

    return 0;
}