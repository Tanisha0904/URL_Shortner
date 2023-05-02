#include <bits/stdc++.h>
using namespace std;
#define ll long long

string ans()
{
    ll n;
    cin >> n;
    if (n%2020 <=n/2020)
    {
        return "YES";
    }
    
    return "NO";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        cout << ans() << "\n";
    }
    return 0;
}