#include<bits/stdc++.h>
using namespace std;
const int MAX = 200001;
vector<bool> prime(MAX+1,true);

void seive(){
    prime[0] = prime[1] = false;
    for(int i=2; i*i <= MAX; i++){
        if(prime[i]){
            for(int j=i*i; j<= MAX; j+=i){
                prime[j] = false;
            }
        }
    }
}

int main() {
    seive();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout<<(prime[n+1] ? "YES" : "NO") <<endl;
    }
    
    return 0;
}