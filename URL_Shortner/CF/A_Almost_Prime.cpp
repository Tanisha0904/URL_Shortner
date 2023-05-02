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
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
bool isAlmostPrime(ll n)
{
    ll count = 0;
    if (n <= 5)
        return false;
    rep(i, 6, n + 1)
    {
        count = 0;
        rep(j, 2, n)
        {
            if (isPrime(j) && i % j == 0)
            {
                count++;
                if (count > 2)
                {
                    return false;
                }
            }
        }
    }
    if (count != 2)
        return false;
    // cout<<count<<" ";
    return true;
}
ll tan()
{
    ll n;
    cin >> n;
    ll count = 0;

    rep(j, 6, n + 1)
    {
        if (isAlmostPrime(j))
        {
                // cout<<j<<" ";

            count++;
        }
    }
    return count;
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