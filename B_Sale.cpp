#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    long long int n,m,sum=0;
    cin >> n >>m;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    
    for(long long int i=0; i<m; i++){
        if(arr[i]<0){
           sum += -arr[i];
        }
    }

    cout<<sum <<endl;

    return 0;
}