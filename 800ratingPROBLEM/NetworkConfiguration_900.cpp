#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin >> n >>k;
    int a[n];
    for(int i=0;i<n; i++){
        cin >>a[i];
    }
    //descending sort- shortcut
    sort(a,a+n,greater<int>());
    int minSpeed = a[k-1];
    cout<<minSpeed <<endl;
    return 0;
}