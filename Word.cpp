#include<iostream>
#include<string>
using namespace std;

int main(){
   string s;
   cin >>s;

   int upperCount = 0, lowerCount = 0;

   for(int i =0; i<s.length(); i++){
     if(s[i]>='A' && s[i]<='Z')upperCount++;
     else if(s[i]>='a' && s[i]<='z')lowerCount++;
   }
   if(upperCount > lowerCount){
       for(int i =0; i<s.length();i++){
         s[i] = toupper(s[i]);
       }
       cout<<s <<endl;
   }
   else if(upperCount < lowerCount){
       for(int i =0; i<s.length();i++){
         s[i] = tolower(s[i]);
       }
       cout<<s <<endl;
   }
    else if(upperCount==lowerCount){
       for(int i =0; i<s.length();i++){
         s[i] = tolower(s[i]);
       }
       cout<<s <<endl;
   }
   
    return 0;
}