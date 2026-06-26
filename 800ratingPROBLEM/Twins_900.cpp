#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,totalSumCoin=0;
    cin >> n;

    int a[n];
    for(int i=0;i<n; i++){
        cin >> a[i];
        totalSumCoin += a[i];
    }

    // sorting array in descending order by using insertion sort
     for(int i=1; i<n;i++){
        int current = a[i];
        int prev = i-1;
        while(prev>=0 && a[prev]<current){
             a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=current;
     }
      
     int selectedCoinSum =0;
     int minCoinCount =0;

     for(int i=0; i<n; i++){
        selectedCoinSum += a[i];
        minCoinCount++;

        int remainCoinSum = totalSumCoin - selectedCoinSum;
        if(selectedCoinSum>remainCoinSum){
            cout<<minCoinCount;
            break;
        }
     }

    return 0;
}
