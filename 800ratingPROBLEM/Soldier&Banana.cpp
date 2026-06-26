#include<iostream>
using namespace std;

int main(){
    long long int k,n,w,borrow,totalCost=0;
    cin >>k >>n >>w;
    
    int i =1;
    while(i<=w){
        totalCost += i*k;
        i++;
    }
    
    borrow = totalCost - n;
    
    if(totalCost<=n) cout<<"0" <<endl;
    else cout <<borrow <<endl;

    return 0;
}