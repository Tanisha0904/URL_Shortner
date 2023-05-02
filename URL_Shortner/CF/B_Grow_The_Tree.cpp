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
    sort(a, a+n);
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    ll i = 0, s1 = 0, s2 = 0;

    if (n % 2 == 0)
    {
        for(i= 0;i< (n / 2);i++)
        {
            s1 += a[i];
        }
        for(ll j= i;j< n;j++)
        {
            s2 += a[j];
        }
    }
    
    else
    {
        for(i= 0;i< (n -1)/ 2;i++)
        {
            s1 += a[i];
        }
        for(ll j= i ;j< n;j++)
        {
            s2 += a[j];
        }
    }
    // cout<<"i="<<i<<" \n";
    // cout << s1 << " " << s2<<" ";
    return ((s1 * s1) + (s2 * s2));
}
int main()
{
    // ios::sync_with_stdio(false); cin.tie(0);
    // tc{
    // tan();
    // cout<<endl;
    cout << tan() << endl;
    // }
    return 0;
}