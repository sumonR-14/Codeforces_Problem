#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int count = 0, a, sount = 0;

        for (int i = 0; i <= n; i++)
        {
            if (mp[i] > i)
            {
                a = mp[i] - i;
                count += a;
            }
            else if (mp[i] < i)
            {
                sount += mp[i];
            }
        }

        cout << count + sount << endl;
    }

    return 0;
}