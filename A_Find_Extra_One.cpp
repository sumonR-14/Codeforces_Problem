#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;

     vector <pair<int,int>> v(n);

     for(int i=0; i<n; i++){
      //  int x,y;
      //  cin >>x >>y;
      //  v.push_back({x,y});
      cin >> v[i].first >>v[i].second; //(X,y)
    }

    int right=0,left =0;

    for( auto &point : v){
        if( point.first>0 ) right++; //x>0
        else if( point.first < 0) left++; //x<0
    }

    if(left == 0 || right == 0) cout<<"Yes"<<endl;
    else if ( left == 1 || right == 1) cout<<"Yes" <<endl;
    else cout<<"No" <<endl;
  
    return 0;
}