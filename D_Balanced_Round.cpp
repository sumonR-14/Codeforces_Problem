#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >>t;
    
    while (t--)
    {
         long long int n,k;
         cin >>n >>k;
         long long int a[n];
         for(long long int i=0;i<n;i++){
            cin >>a[i];
         }
         sort(a,a+n);
         int maxLen =1;
         int currentLen=1;// 0 idx er value er length 1
         for(long long int i=0;i<n-1;i++){
            if(abs(a[i+1]-a[i])<=k){
                currentLen++;
            }else{
               currentLen=1;
            }
            maxLen = max(maxLen,currentLen);
         }
         cout<<(n-maxLen) <<endl;
    }
    
    return 0;
}