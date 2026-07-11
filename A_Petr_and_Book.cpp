#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>a(7);
    for(int i=0; i<7;i++){
        cin>>a[i];
    }
    int sum =0;
    int index =-1;
    int i=0;
    while (sum < n)
    {
        sum += a[i];
        if(sum>=n){
            index = i;
            break;
        }
        i++;
        if(i==a.size())i=0;
    }

    cout<<index+1 <<endl;
    
    return 0;
}