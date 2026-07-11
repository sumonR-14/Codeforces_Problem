#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                while (a[i] != b[i])
                {
                    count++;
                    a[i] -= 1;
                }
            }
            else if (a[i] <= b[i])
            {
                continue;
            }
        }
        cout << count + 1 << endl;
    }
    return 0;
}
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >>n;
//         vector<int> a(n);
//         vector<int> b(n);

//         for(int i=0; i<n;i++){
//             cin >>a[i];
//         }
//          for(int i=0; i<n;i++){
//             cin >>b[i];
//         }

//         int count=0;
//         while(a != b){
//             count++;
//             for(int i=0; i<n; i++){
//                 if(a[i]>b[i]){
//                     a[i] -= 1;
//                 }
//                 else if(a[i]<b[i]){
//                     a[i] += 1;
//                 }
//             }
//         }

//         cout<<count <<endl;

//     }

//     return 0;
// }