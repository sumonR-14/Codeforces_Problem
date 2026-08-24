#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x<2) return false;

    for(int i=2; i*i<=x; i++){
        if(x%i==0) return false;
    }

    return true;
}

int main() {
    int n; cin >> n;
    int ans =0;

    for(int num =2; num<=n; num++){
        int pd=0;
        for(int i=2; i<=num; i++){
            if(num%i==0 && isPrime(i)){
                pd++;
            }
        }
        if(pd==2)ans++;
    }
    cout<<ans <<endl;
    return 0;
}