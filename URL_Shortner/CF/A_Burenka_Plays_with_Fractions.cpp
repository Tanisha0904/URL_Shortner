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
int ans()
{
    // double a[4];
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    // rep(i, 0, 4)
    // {
    //     cin >> a[i];
    // }
    // if (a[0] / a[1] == a[2] / a[3])
    if(a/b == c/d)
        return 0;
    if(ceil(a*d/(c*b))==floor(a*d/(c*b)) || ceil(b*c/(a*d))==floor(c*b/(a*d))) return 1;
     return 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        cout<<ans()<<"\n"; 
    }
    return 0;
}