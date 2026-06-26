#include<iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        long long int x,temp,z;
        cin >>x;
        
        temp =x;

        while (temp!=0)
        {
             z= temp%10;
             cout<<z <<" ";
             temp /= 10;
        }
        cout<<endl;
    }
    return 0;
}