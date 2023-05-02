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

string ans()
{
    string s;
    ll a = 0, b = 0, c = 0;
    cin >> s;
    sort(s.begin(), s.end());
    rep(i, 0, s.size())
    {
        if (s[i] == 'A')
            a++;
        else if (s[i] == 'B')
            b++;
        else
            c++;
    }
        if (b - a - c == 0)
            return "YES";
    return "NO";
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