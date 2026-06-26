#include<bits/stdc++.h>
using namespace std;

int main() {
    long long l,w,f; cin>> l >> w >> f;
    long long r1 = (l+f-1)/f;
    long long r2 =(w+f-1)/f;

    cout<< r1 * r2 <<endl;
    return 0;
}