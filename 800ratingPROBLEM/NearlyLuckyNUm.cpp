#include<iostream>
using namespace std;
bool Islucky(int count){
    int rem;
    if(count == 0) return false;
    while(count>0){
        rem = count %10;
       if(rem!=4 && rem!=7){
         return false;
       }
       count= count/10;
    }
    return true;
}

int main(){
    long long int n,rem;
    cin >>n;
    int digitCount =0;
    while(n>0){
        rem = n % 10;
        if(rem==4 || rem==7){
            digitCount++;
        }
        n = n/10;
    }

    if(Islucky(digitCount)){
        cout<<"YES" <<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}