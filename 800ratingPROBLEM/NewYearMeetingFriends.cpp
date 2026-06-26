#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
   
   int a[3];
   for(int i=0; i<3;i++){
     cin >>a[i];
   }

   for(int i=1;i<3;i++){
     int current = a[i];
     int prev = i-1;
     while(prev>=0 && a[prev]<current){
        a[prev+1] = a[prev];
        prev--;
     }
     a[prev+1] = current;
   }

   int fdistance =abs(a[1] - a[2]);
   int sMindis = abs(a[0] - a[1]);
   int minDis = sMindis + fdistance;
   cout<<minDis <<endl;

    return 0;
}