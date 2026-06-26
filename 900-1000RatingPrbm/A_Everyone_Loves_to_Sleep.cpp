#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--)
    {
        int n,hour,mini,sleepTIme;
        cin >> n >>hour >>mini;
        sleepTIme =( hour*60 +mini );

        vector <int> alarms;
        for(int i=0; i<n; i++){
              int h,m;
             cin >> h >> m;
            alarms.push_back(h*60+m);// sob alarm min a nilam
        }

        int minDiff = INT_MAX; // sob alrm er moddhe konta min tarjonno mindiff

        for( int alarmTime : alarms){  // sob alarm guloke alarmTime a dilam
            int diff;
            if(alarmTime>=sleepTIme){
                diff = (alarmTime-sleepTIme);
            }
            else{
                diff = (24*60 - sleepTIme) + alarmTime; //porerdin er alarm er jonno 
            }
            minDiff = min(minDiff,diff);  // sob alrm er moddhe konta min tarjonno mindiff
        }

      cout << minDiff/60 <<" " << minDiff%60 <<endl;
    }
    
    return 0;
}
