#include<iostream>
using namespace std;

int main() {
   int arr[]={2,3,4,1,1};
   int min = arr[0],x;
   int max = arr[0],y;

   for(int i=0; i<5;i++){
     if(min>arr[i]){
        min = arr[i];
        x=i;
     }
      if(max<arr[i]){
        max = arr[i];
        y=i;
     }
     
   }
   cout<<min <<" "<<x <<endl;
   cout<<max <<" "<<y;
    return 0;
}