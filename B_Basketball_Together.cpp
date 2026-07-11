#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n,d; cin>>n >>d;
    vector<long long>a(n);
    for(int i=0; i<n; i++) cin >>a[i];

    sort(a.begin(),a.end(),greater<long long>());

    long long i=0;
    long long j =n-1;
    long long ans =0;

    while (i<=j)
    {
        long long need = d/a[i] + 1;
        if(need<=j-i+1){
            ans++;
            i++;
            j -= (need-1);
        }else{
            break;
        }
    }
    cout<<ans <<endl;
    
    return 0;
}