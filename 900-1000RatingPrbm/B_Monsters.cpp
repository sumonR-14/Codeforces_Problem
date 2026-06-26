#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--)
    {
        long long n,k; cin >> n >>k;
        vector<long long>a(n);
        vector<pair<long long,long long>>health_points(n);
        for(long long i=0; i<n;i++){
            cin >> a[i];
            health_points[i]={a[i],i+1};
        }
        for(long long i=0; i<n;i++){
           health_points[i].first = health_points[i].first %k;
           if(health_points[i].first==0){
            health_points[i].first =k;
           }
        }
        //custom sort function
        sort(health_points.begin(),health_points.end(),[&](pair<long long,long long>a,pair<long long,long long>b){
            if(a.first != b.first)
             return a.first > b.first;
            return a.second <b.second ;   
        });
        for(auto it : health_points){
            cout<<it.second <<" ";
        }
        cout <<endl;
        
    }
    
    return 0;
}