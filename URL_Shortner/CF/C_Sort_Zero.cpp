#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n <= 1)
    {
        return 0;
    }

    ll i = n - 1;
    while (a[i] == a[i - 1] && i >= 0)
    {
        i--;
    }
    // cout<<i<<"-";
    if (i == 0)
    {
        return 0;
    }
    if (i = 1)
    {
        if (a[0] < a[i])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    sort(a, a + i);
    // for(ll k=0;k<i;k++){
    //     cout<<a[k]<<" ";
    // }
    // cout<<"--";
    ll count = 1;
    for (ll j = 0; j < i - 1; j++)
    {
        if (a[j] != a[j + 1])
        {
            count++;
        }
    }
    return count;
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