#include<iostream>
#include<string>
using namespace std;

int main() {
    int t,n,m;
    cin >>t;
    while(t--){
        string s1,s2,s3;
        cin >>n >>s1;
        cin >>m >>s2 >>s3;
        for (int i = 0; i < s3.length(); i++)
        {
            if(s3[i]=='D'){
                s1.insert(s1.end(),s2[i]);
            }
            else{
                s1.insert(s1.begin(),s2[i]);
            }
        }
        cout<<s1 <<endl;
    }
    return 0;
}