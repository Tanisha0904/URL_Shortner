#include <bits/stdc++.h>
using namespace std;
#define ll long long

string ans()
{
    ll n;
    cin >> n;
    ll x = n;
    while (x > 1)
    {
        if (x % 2 != 0)
        {
            return " YES\n";
        }
        else
        {

            x = x / 2;
        }
    }
    return "NO\n";
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout << ans();
    }
    return 0;
}