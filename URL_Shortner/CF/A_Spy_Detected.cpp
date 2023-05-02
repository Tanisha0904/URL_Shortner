#include <bits/stdc++.h>
#define ll long long int
#define nd cout << endl
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
#define re(i, a, b) for (int i = a; i >= b; i--)
#define pVec(v)           \
    for (auto e : v)      \
        cout << e << " "; \
    cout << "\n"
#define aut(e, v) for (auto e : v)
using namespace std;

ll ans()
{
    ll n;
    cin >> n;
    ll a[n];
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    ll m = a[0];
    rep(i, 1, n - 1)
    {
        if (a[i] != a[i + 1] && a[i] != a[i - 1])
        {
            return i + 1;
        }
        else if(a[i]!=a[i+1] && a[i+1]!=a[i-1]){
            return i+1+1;
        }
        else if(a[i-1]!=a[i+1]&& a[i]!=a[i-1]){
            return i-1+1;
        }
    }
    
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        cout << ans() << "\n";
    }
    return 0;
}