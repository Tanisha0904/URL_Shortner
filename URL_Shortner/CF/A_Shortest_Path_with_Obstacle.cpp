#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    cout << "\n";

    while (t--)
    {

        ll a[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> a[i];
        }
        ll s = abs(a[0] - a[2]) + abs(a[1] - a[3]);
        if (a[1] == a[3] && a[1] == a[5])
        {
            if ((a[0] < a[4] && a[4] < a[2]) || (a[0] > a[4] && a[4] > a[2]))
            {
                s += 2;
            }
        }
        else if (a[0] == a[2] && a[0] == a[4])
        {
            if ((a[1] < a[5] && a[5] < a[3]) || (a[1] > a[5] && a[5] > a[3]))
            {
                s += 2;
            }
        }
        cout << s << '\n';
    }
    return 0;
}
