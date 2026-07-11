#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int k;
    cin >>k;
    int n=12;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n,greater<int>());

    int count=0,sum=0;

     int i=0;
        while( i<n && sum<k){
           sum += a[i]; 
           count++;
           i++;
        }   
    if(sum>=k){
        cout<<count <<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}