#include<iostream>
using namespace std;

int main() {
     int a,b;
     cin >>a >>b;
     int hours =0;
     int leftovers=0;

     hours =a;
     leftovers =a;

     while (leftovers>=b)
     {
        int newcandle = leftovers/b;
        hours += newcandle;
        leftovers = leftovers%b +newcandle;
     }

     cout <<hours <<endl;
     
    return 0;
}