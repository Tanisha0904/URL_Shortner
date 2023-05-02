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
    ll r[n], b[n];
    rep(i, 0, n) cin >> r[i];
    rep(i, 0, n) cin >> b[i];
    ll ro = 0, bi = 0;
    rep(i, 0, n)
    {
        if (r[i] == 1 && b[i] != 1)
        {
            ro++;
        }
        else if (r[i] != 1 && b[i] == 1)
        {
            bi++;
        }
    }
    ll cnt=1;
    if(ro==bi || ro==0)return -1;
    // if(ro==0) return 1;
    
    return bi / ro + 1;
    return 0;
}
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // tc
    // {
        // tan();
        // cout<<endl;
        cout << tan() << endl;
    // }
    return 0;
}