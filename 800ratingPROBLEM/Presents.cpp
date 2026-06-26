#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    int receive[n];
    for(int i=1; i<=n; i++){
       receive[arr[i]]=i;
    }
     for(int i=1; i<=n; i++){
        cout<<receive[i] <<" ";
    }
   
    return 0;
}