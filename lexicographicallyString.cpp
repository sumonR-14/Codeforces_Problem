#include<iostream>
#include<string>
using namespace std;

int main(){
    string firstStr;
    string secondStr;
    do {
        cin >> firstStr >> secondStr;
    } while (firstStr.length() != secondStr.length());

    for (int i=0;i<firstStr.length(); i++){
        firstStr[i] = tolower(firstStr[i]);
        secondStr[i] = tolower(secondStr[i]);
    }

    if(firstStr > secondStr) cout<<"1" <<endl;
    else if(firstStr<secondStr) cout <<"-1" <<endl;
    else if(firstStr==secondStr) cout <<"0" <<endl;
 
    return 0;
}