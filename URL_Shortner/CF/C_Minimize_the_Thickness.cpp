#include <bits/stdc++.h>
#define ll long long int
#define nd cout << endl;
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(), (x).end()
#define pii pair<int, int>
#define vi vector<int>
#define rep(i, a, b) for (long long int i = a; i < b; i++)
#define re(i, a, b) for (long long int i = a; i >= b; i--)
#define printVec(v)         \
    for (auto val : v)      \
        cout << val << " "; \
    cout << endl
#define auto(val, v) for (auto val : v)
using namespace std;

ll tan()
{

    ll n;
    cin >> n;
    ll a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        return n;
    }
    ll i = 1, j = n - 2;
    ll sum1 = a[0];
    ll sum2 = a[n - 1];
    ll mini = 0;
    ll c1 = 0, c2 = 0;

    while (i < j)
    {
        if (sum1 == sum2)
        {
            c1 = i - c1;
            c2 = n - j - c2;
            i++;
            j--;
            ll k = max(c1, c2);
            mini = max(k, mini);
            // sum1 = a[i];
            // sum2 = a[j];
        }
        if (sum1 < sum2)
        {
            sum1 += a[i];
            i++;
        }
        if (sum2 < sum1)
        {
            sum2 += a[j];
            j--;
        }
    }

    if (mini == 0)
    {
        return n;
    }
    return mini;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        // tan();
        // cout<<endl;
        cout << tan() << endl;
    }
    return 0;
}