#include<iostream>
#include<string>
using namespace std;

int main() {
    int n,isum=0,csum=0,dsum=0,tsum=0,osum=0,total=0;
    cin>>n;
    while(n--){
        string s;
        cin >> s;
        if(s=="Icosahedron"){
            isum += 20;
        }
        else if(s=="Tetrahedron"){
            tsum += 4;
        }
        else if(s=="Cube"){
            csum += 6;
        }
         else if(s=="Dodecahedron"){
            dsum += 12;
        }
         else if(s=="Octahedron"){
            osum += 8;
        }
        
        total =isum + dsum +osum +csum +tsum;
    }

    cout<<total <<endl;
    return 0;
}