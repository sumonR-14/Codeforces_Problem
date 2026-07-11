#include<iostream>
using namespace std;

int main() {
    long long int t,n;
    cin >>t;
    while (t--)
    {
       cin >>n;
       int result = n/2020;
       if(result<1) cout<<"NO" <<endl;
       else{
          int lastdigit = n%2020;
          if(lastdigit>result){
            cout<<"NO" <<endl;
          }
          else{
            cout<<"YES" <<endl;
          }
       }
    }
    
    return 0;
}