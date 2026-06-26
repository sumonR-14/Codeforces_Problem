#include<iostream>
#include<string>
using namespace std;

int main(){
   int a,b,yearCOunt=0;
   cin >> a >> b;

   while (a<=b)
   {
     a= 3*a;
     b=2*b;
     yearCOunt++;
   }
   
   cout<<yearCOunt;

    return 0;
}