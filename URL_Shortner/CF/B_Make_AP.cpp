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
string tan()
{
    // ((2*b-a)!=0 && (2*b-c)!=0)
    double a, b, c;
    cin >> a >> b >> c;
    // if((b-a==c-b))return "YES";
    if ((b - a == c - b) || ((floor((a + c) / (2 * b)) == ceil((a + c) / (2 * b))) || (floor((2 * b - c) / (a)) == ceil((2 * b - c) / (a)) && (2 * b - c) > 0) || (floor((2 * b - a) / (c)) == ceil((2 * b - a) / (c)) && (2 * b - a) > 0)))
        return "YES";
    return "NO";
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