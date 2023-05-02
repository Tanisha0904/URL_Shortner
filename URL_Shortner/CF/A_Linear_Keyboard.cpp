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

    string k, s;
    cin >> k >> s;
    ll n = k.size();
    ll m = s.size();
    vi v;
    rep(i, 0, m)
    {
        rep(j, 0, n)
        {
            if (s[i] == k[j])
            {
                v.pb(j);
                j = n;
            }
        }
    }
    ll moves = 0;
    rep(i, 0, v.size() - 1)
    {
        moves = moves + abs(v[i + 1] - v[i]);
    }
    return moves;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        // tan();
        //  cout<<endl;
        cout << tan() << endl;
    }
    return 0;
}