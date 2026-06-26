#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
     long long int n;
     cin >>n;
     string s;
     cin >> s;
     int count0 =0, count1=0;

     for( char c : s){
        if(c=='0')count0++;
        else count1 ++;
     }

     int finalLen = n- 2*min(count0,count1);
     cout<<finalLen <<endl;

    return 0;
}