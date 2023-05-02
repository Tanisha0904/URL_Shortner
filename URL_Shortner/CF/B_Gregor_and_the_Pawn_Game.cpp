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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define re(i, a, b) for (int i = a; i >= b; i--)
#define pVec(v)           \
    for (auto e : v)      \
        cout << e << " "; \
    cout << "\n"
#define aut(e, v) for (auto e : v)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        ll n, count = 0;
        cin >> n;
        string e, g;
        // ll e[n], g[n];
        ll sum[n];
        cin >> e >> g;
        if (g[0] == '1')
        {

            if (e[0] == '0')
            {
                count++;
            }
            else if (e[1] == '1')
            {
                count++;
                e[1] = '0';
            }
        }
        rep(i, 0, n)
        {
            if (g[i] == '1')
            {
                if (i > 0 && i < n - 1)
                {
                    if (e[i] == '0')
                    {
                        count++;
                    }
                    else if (e[i - 1] == '1')
                    {
                        count++;
                        e[i - 1] = '0';
                    }
                    else if (e[i + 1] == '1')
                    {
                        count++;
                        e[i + 1] = '0';
                    }
                }
            }
        }
        if (g[n - 1] == '1')
        {
            if (e[n - 1] == '0')
            {
                count++;
            }
            else if (e[n - 2] == '1')
            {
                count++;
                e[n - 2] = '0';
            }
        }

        cout << count << "\n";
    }
    return 0;
}