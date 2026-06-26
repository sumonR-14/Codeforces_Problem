// #include<iostream>
// using namespace std;
// int main(){
//     long long int n,mul=1;
//     cin >>n;
//     long  long int arr[n];
//     int count =0;
    
//     for(long long int i=0; i<n; i++){
//         cin >>arr[i];
//         mul = mul*arr[i];
//     }

//      while(mul!=0){
//            if(arr[0]>0) arr[0]--;
//            else arr[0]++;
//            count++;
//            mul =1;
//            for(long long int i=0; i<n; i++){
//              mul = mul*arr[i];
//            }
//           } 

//         cout<<count <<endl;

//         return 0;
//     }
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    int min_ops = INT_MAX;

    for(int i = 0; i < n; i++) {
        cin >> a;
        int ops = abs(a);
        if(ops < min_ops) {
            min_ops = ops;
        }
    }

    cout << min_ops << endl;
    return 0;
}
   
