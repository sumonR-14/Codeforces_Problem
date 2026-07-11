#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin >>s;
    
    int maxcount=0;
    char best1,best2;

    for(int i=0; i<n-1; i++){
        int count =0;
        // char a=s[i];
        // char b=s[i+1];

        for(int j=0;j<n-1; j++){
            if(s[j]==s[i] && s[j+1]==s[i+1]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            best1=s[i];
            best2=s[i+1];
        }
    }
    cout<<best1<<best2 <<endl;

    return 0;
}