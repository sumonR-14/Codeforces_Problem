#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >>n;
    vector<int>t(n);

    for(int i=0; i<n; i++){
        cin >>t[i];
    }
    sort(t.begin(),t.end());

    for (int i = 0; i < n; i++)
    {
     for(int j=i+1; j<n; j++){
        if(t[i] == t[j]) continue;
        for(int k=j+1; k<n; k++){
            if(t[k] == t[i] || t[j] == t[k]) continue;

            if(abs(t[i]-t[j])<=2 &&
             abs(t[j]-t[k])<=2 &&
             abs(t[k]-t[i])<=2 ){
                cout<<"YES" <<endl;
                return 0;
             }
        }
     }
    }
    cout<<"NO"<<endl;
    return 0;
}