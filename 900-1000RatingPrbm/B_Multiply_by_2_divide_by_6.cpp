#include<iostream>
using namespace std;

int minMoves(long long int n){

    int count2=0,count3=0;

    while(n%2==0){
        n /=2;
        count2++;
    }

    while(n%3==0){
        n /=3;
        count3++;
    }

    if(n!=1 || count2>count3){
        return -1;
    }
    return 2*count3 - count2;
}

int main() {
    long long int t,n;
    cin >>t;
    while (t--)
    {
        cin >>n;
        cout<<minMoves(n) <<endl;
        
    }
    
    return 0;
}