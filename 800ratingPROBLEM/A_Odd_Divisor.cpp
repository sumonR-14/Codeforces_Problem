#include <iostream>
using namespace std;
int main()
{
    long long int t, n;
    cin >> t;
   
    while (t--)
    {
        cin >> n;
        bool found = false;
        for ( long long int i = 3; i <= n; i+=2)
        {
            if (n % i == 0)
            {
               found = true;
               break;
            }
        }

        if (found == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}