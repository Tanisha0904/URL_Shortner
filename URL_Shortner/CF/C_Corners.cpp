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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        ll n, m;
        cin >> n >> m;
        string s[n];
        rep(i, 0, n)
        {
            cin >> s[i];
        }
        ll count = 0;
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                if (s[i][j] == '0')
                {
                    count++;
                }
            }
        }
        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                if (s[i][j] == '0')
                {
                    j = m;
                }
                if (j == m - 1 && s[i][j] == '1')
                {
                    count++;
                }
            }
        }
        if((n*m)%2!=0){
        cout << m * n - count-1<< "\n";
        }
        else
            cout << m * n - count << "\n";
    }
    return 0;
}