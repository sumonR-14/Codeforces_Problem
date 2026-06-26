#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--)
    {
      int x;
      cin >>x;
      if(x>45) cout <<-1 <<endl;
      else{
        vector<int>digits;
        for (int i =9; i >=1; i--)
        {
            if(i<=x){
                digits.push_back(i);
                x -= i;
            }
        }
        sort(digits.begin(),digits.end());

        for(int val : digits){
            cout<<val;
        }
        cout<<endl;//full ta print erpor endl need
      }
    }
    
    return 0;
}