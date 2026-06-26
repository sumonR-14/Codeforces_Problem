#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >>n;
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    while (n--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        v.push_back(x);
        v1.push_back(y);
        v2.push_back(z);
    }
    int sum=0,sum1=0,sum2=0;
    for(int i=0; i<v.size();i++){
        sum += v[i];
    }
    for(int i=0; i<v1.size();i++){
        sum1 += v1[i];
    }
    for(int i=0; i<v2.size();i++){
        sum2 += v2[i];
    }
    if(sum==0 && sum1==0 && sum2==0)cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
    return 0;
}