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
char tan()
{

    ll x1, x2, p1, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    ll a = x1 * (pow(10, p1));
    ll b = x2 * (pow(10, p2));
    if (a > b)
        return '>';
    else if (a < b)
        return '<';
    return '=';
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