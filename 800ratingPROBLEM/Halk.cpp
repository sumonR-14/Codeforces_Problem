#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    
    if(n==1){
         cout<<"I hate it";
    }
    else if(n%2==0){
        for(int i =1; i<n;i++){
            if(i%2!=0){
                cout<<"I hate that" <<" ";
            }else{
               cout<<"I love that" <<" ";
            }
        }
        cout<<"I love it";
    }
      else if(n%2!=0){
        for(int i =1; i<n;i++){
            if(i%2!=0){
                cout<<"I hate that" <<" ";
            }else{
               cout<<"I love that" <<" ";
            }
        }
        cout<<"I hate it";
    }
   
    return 0;
}