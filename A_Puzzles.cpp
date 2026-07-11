#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int>a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int mn = INT_MAX;
     for (int i = 0; i+n-1 < m; i++)
    {
        int diff =a[i+n-1]-a[i];
        mn = min(diff,mn);
    }
    cout<<mn <<endl; 
    return 0;
}