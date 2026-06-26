#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >>n;
    vector<int>a(n);
    int b,d;
    cin >> b >>d;
    int count=0,wasteSum=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]<=b){
           wasteSum += a[i];

           if(wasteSum>d){
              count++;
              wasteSum =0;
           }
        }
    }
    cout<<count <<endl;
    return 0;
}