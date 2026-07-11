#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >>t;
    while (t--)
    {
        int n; cin >> n;
        vector<long long>a(n);
        vector<long long>six,two,other,three;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%6==0)six.push_back(a[i]);
             else if(a[i]%2==0)two.push_back(a[i]);
             else if(a[i]%3==0)three.push_back(a[i]);
             else other.push_back(a[i]);
        }
        for(int x:six)cout<<x <<" ";
        for(int x:two)cout<<x <<" ";
        for(int x:other)cout<<x <<" ";
        for(int x:three)cout<<x <<" ";
        cout<<endl;
    }
    
    return 0;
}