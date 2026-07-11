#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin >> s;
        int cnt1 =0, cnt2 =0,mx1=0,mx2=0;
        for(int i=0; i<n; i++){
            if(s[i]=='<'){
                cnt1++;
            }else{
                cnt1=0;
            }
            mx1 = max(mx1,cnt1);
        }
         for(int i=0; i<n; i++){
            if(s[i]=='>'){
                cnt2++;
            }else{
                cnt2=0;
            }
            mx2 = max(mx2,cnt2);
        }

        cout<<max(mx1,mx2)+1 <<endl;
    }
    
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin >> t;
//     while (t--) {
//         int n; cin >> n;
//         string s; cin >> s;
        
//         int cnt = 0, mx = 0;
//         for (int i = 0; i < n; i++) {
//             // consecutive same chars count
//             if (i == 0 || s[i] == s[i - 1]) {
//                 cnt++;
//             } else {
//                 cnt = 1; // reset counter when different
//             }
//             mx = max(mx, cnt);
//         }

//         cout << mx << endl; // +1 এখন আর লাগবে না
//     }
//     return 0;
// }