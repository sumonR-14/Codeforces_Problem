#include<bits/stdc++.h>
using namespace std;

int main() {
   int n,m; cin >> n >> m;
   queue<int>q;
   vector<int>a(n+1);
   for(int i=1;i<=n; i++){
    cin >> a[i];
    q.push(i);
   }
    int lastchild =-1;

    while (!q.empty())
    {
        int child = q.front();
        q.pop();

        a[child] -= m;
        if(a[child]>0){
            q.push(child);
        }
        else{
            lastchild = child;
        }
    }
    cout<<lastchild <<endl;
    
    return 0;
}