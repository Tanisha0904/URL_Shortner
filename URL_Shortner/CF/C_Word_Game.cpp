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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define re(i, a, b) for (int i = a; i >= b; i--)
#define printVec(v)         \
    for (auto val : v)      \
        cout << val << " "; \
    cout << endl
#define auto(val, v) for (auto val : v)
using namespace std;
void tan()
{
    int n;
    cin >> n;
    map<string, int> m;

    string a[3][n];
    rep(i, 0, 3)
    {
        rep(j, 0, n)
        {
            cin >> a[i][j];
            m[a[i][j]]++;
        }
    }
    int arr[3] = {3 * n, 3 * n, 3 * n};
    // int a=3*n;
    // int b=a, c=a;
    rep(i, 0, 3)
    {
        rep(j, 0, n)
        {

            if (m[a[i][j]] == 1)
            {
                continue;
            }
            else if (m[a[i][j]] == 2)
            {
                arr[i] = arr[i] - 2;
            }
            else
            {
                arr[i] = arr[i] - 3;
            }
        }
    }

    rep(i, 0, 3)
    {
        cout << arr[i] << " ";
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
        // cout<<tan()<<endl;
    }
    return 0;
}