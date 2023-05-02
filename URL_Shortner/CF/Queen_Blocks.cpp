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
void tan()
{

    ll a, b;
    cin >> a >> b;
    a = a - 1;
    
    b = b - 1;
    // cout<<a<<b<<"\n";
    ll arr[8][8] = {0};
    arr[a][b] = 1;
    if (a == 0 && b == 0)
    {
        arr[a + 2][b + 1] = 2;
        arr[a + 1][b + 2] = 2;
    }
    else if (a == 0 && b == 7)
    {
        arr[a + 2][b - 1] = 2;
        arr[a + 1][b - 2] = 2;
    }
    else if (a == 7 && b == 0)
    {
        arr[a - 2][b + 1] = 2;
        arr[a - 1][b + 2] = 2;
    }
    else if (a == 7 && b == 7)
    {
        arr[a - 2][b - 1] = 2;
        arr[a - 1][b - 2] = 2;
    }
    else if (a == 0 && b != 7 && b != 0)
    {
        arr[a +1][b + 2] = 2;
        arr[a + 1][b - 2] = 2;
    }
    else if (a == 7 && b != 7 && b != 0)
    {
        arr[a - 2][b + 1] = 2;
        arr[a - 2][b - 1] = 2;
    }
    else if (b == 0 && a != 7 && a != 0)
    {
        arr[a + 1][b + 2] = 2;
        arr[a - 1][b + 2] = 2;
    }
    else if (b == 7 && a != 7 && a != 0)
    {
        arr[a - 2][b - 1] = 2;
        arr[a - 2][b + 1] = 2;
    }
    else if (a > 1 && a < 6 && b < 6 && b > 1)
    {
        arr[a + 1][b - 2] = 2;
        arr[a + 2][b + 1] = 2;
        arr[a - 2][b + 1] = 2;
    }
    else
    {
        arr[a + 2][b - 1] = 2;
        arr[a - 1][b + 2] = 2;
    }

    rep(i, 0, 8)
    {
        rep(j, 0, 8)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        tan();
        cout << endl;
    }
    return 0;
}