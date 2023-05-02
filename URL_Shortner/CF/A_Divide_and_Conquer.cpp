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
    ll sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    
    if (sum % 2 == 0)
    {
        return 0;
    }
    sort(a, a + n);

    ll count = 0;
    ll sll = a[0];
    rep(i, 0, n)
    {
        if (a[i] != 0)
        {
            sll = a[i];
            break;
        }
    }
    if (sll % 2 == 0)
    {
        sll--;
    }

    while (sll)
    {
        count++;

        sll = floor(sll / 2);
        if (sll % 2 == 0)
            return count;
    }

    return count;
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