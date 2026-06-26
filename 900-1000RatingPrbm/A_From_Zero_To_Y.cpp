#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int x,y,sum=0;
        cin >>x >>y;
        int a,b,temp;
        a = y/x;
        b = y%x;
        string z= to_string(a);
        for(int i=0;i<z.length();i++){
            int d = z[i] -'0';
            sum +=d;
        }

        cout<<(sum+b) <<endl; 
    }
    return 0;
}