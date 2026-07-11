#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main() {
    string s1,s2;
    int p1,p2;
    int t;
    cin >>t;
    while (t--)
    {
        cin >> s1 >>p1;
        cin >>s2 >>p2;
        while(s1[s1.size()-1]=='0'){
            p1++;
            s1.pop_back();
        }
         while(s2[s2.size()-1]=='0'){
            p2++;
            s2.pop_back();
        }
        if(s1==s2){
            if(p1==p2) cout<<"="<<endl;
            else if(p1>p2) cout <<">" <<endl;
            else cout<<"<" <<endl;
        }
        else{
            int x=s1.size()+p1;
            int y = s2.size()+p2;
            if(x==y){
                //if(s1==s2) cout<<"="; eta check na korleo hocche karon upore ei condition check hocchei
                if(s1>s2) cout<<">" <<endl;
                else cout<<"<" <<endl;
            }

            else if(x>y) cout<<">" <<endl;
            else cout<<"<"<<endl;
 
        }
    }
 
    return 0;
}