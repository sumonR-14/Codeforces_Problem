#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long int t,n;
    cin >>t;
    while (t--)
    {
        cin >>n;
        for (long long int i = 2; i <=10e9; i++)
        {
            int p = pow(2,i)-1;
            if (n%p==0)
            {
                cout<<n/p <<endl;
                break;
            }
            
        }
        
    }
    
    return 0;
}