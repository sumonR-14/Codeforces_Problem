#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        if (n == 1)
        {
            cout << min(a, b) << endl;
        }
        else if (n == 2)
        {
            if (2 * a < b)
                cout << 2 * a << endl;
            else
                cout << b << endl;
        }
        else
        {
            long long mn, baki, ans;
            if (n % 3 == 0)
            {
                mn = n / 3;
                cout << min(mn * b, 3 * mn * a) << endl;
            }
            else
            {
                mn = n / 3;
                baki = n - 3 * mn;
                if (mn * b <= 3 * mn * a)
                {
                    ans = mn * b;
                    if (baki == 1)
                    {
                        cout << ans + min(a, b) << endl;
                    }
                    else if (baki == 2)
                    {
                        if (2 * a < b)
                            cout << ans + (2 * a) << endl;
                        else
                            cout << ans + b << endl;
                    }
                }
                else if (mn * b > 3 * mn * a)
                {
                    ans = 3 * mn * a;
                    if (baki == 1)
                    {
                        cout << ans + min(a, b) << endl;
                    }
                    else if (baki == 2)
                    {
                        if (2 * a < b)
                            cout << ans + (2 * a) << endl;
                        else
                            cout << ans + b << endl;
                    }
                }
            }
        }
    }

    return 0;
}