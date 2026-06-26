#include<iostream>
using namespace std;

int main() {
   int n,m;
   cin >>n >>m;
   int i=1;
   while (m*i<=n)
   {
    n++;
    i++;
   }
   cout<<n<<endl;
    return 0;
}