#include<iostream>
using namespace std;

int main() {
     int t;
     cin >>t;
     
     while(t--){
        int n,sum=0;
        cin >> n;
        if(n%3==0){
            sum += (n/3)*5;
        }
        else if (n%3==2)
        {
          sum += (n/3)*5 + 4;
        }
        else{
            sum += (n/3-1)*5 + 2*4;
        }
        
        cout<<sum <<endl;
     }
    return 0;
} 