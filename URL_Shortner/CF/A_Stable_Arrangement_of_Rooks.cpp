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
#define re(i, a, b) for (long long int i = a; i >= b; i--)
#define pVec(v)           \
    for (auto e : v)      \
        cout << e << " "; \
    cout << "\n"
#define aut(e, v) for (auto e : v)
using namespace std;
void tan()
{

    ll n, k;
    cin >> n >> k;
if(k>(n+1)/2){
    cout<<"-1\n";
}
else{
    char a[n][n];
    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            a[i][j] = '.';
        }
    }
    ll I = 0;
    while (k--)
    {
        a[I][I] = 'R';
        I += 2;
    }

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }
    
}
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        tan();
    }
    return 0;
}