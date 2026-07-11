#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    bool present[101] = {false};

    vector<int> v(n);
    for (int i = 0; i < n; i++){
         cin >> v[i];
        present[v[i]] = true;
    }
    int ans =0;
    for(int i=0; i<x; i++){
        if(!present[i]) ans++;
    }
    if(present[x]) ans++;
    cout<<ans <<endl;

    return 0;
}