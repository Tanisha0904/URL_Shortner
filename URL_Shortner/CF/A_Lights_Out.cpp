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

    ll a[4][4];
    ll b[5][5];
    rep(i, 1, 4)
    {
        rep(j, 1, 4)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    rep(i, 1, 4)
    {
        rep(j, 1, 4)
        {
            if(a[i][j]!=0){

                b[i][j - 1] += a[i][j];
                b[i][j + 1] += a[i][j];
                b[i - 1][j] += a[i][j];
                b[i + 1][j] += a[i][j];
            }
        }
    }
    rep(i, 1, 4)
    {
        rep(j, 1, 4)
        {
            if (b[i][j] % 2 == 0)
            {
                cout << "1";
            }
            else{
                cout<<"0";
            }
        }
            cout << "\n";
    }
}
int main()
{
    // ios::sync_with_stdio(false); cin.tie(0);
    // tc{
    tan();
    // cout<<endl;
    //     cout<<tan()<<endl;
    // }
    return 0;
}

// if (i == 0)
//             {
//                 if (j == 0)
//                 {
//                     b[i + 1][j] += a[i][j];
//                     b[i][j + 1] += a[i][j];
//                 }
//                 else if (j == 2)
//                 {
//                     b[i + 1][j] += a[i][j];
//                     b[i][j - 1] += a[i][j];
//                 }
//                 else
//                 {
//                     b[i + 1][j] += a[i][j];
//                     b[i][j - 1] += a[i][j];
//                     b[i][j + 1] += a[i][j];
//                 }
//             }
//             else if (i == 2)
//             {
//                 if (j == 0)
//                 {
//                     b[i + 1][j] += a[i][j];
//                     b[i - 1][j] += a[i][j];
//                     b[i][j + 1] += a[i][j];
//                 }
//                 else if (j == 2)
//                 {
//                     b[i - 1][j] += a[i][j];
//                     b[i][j - 1] += a[i][j];
//                 }
//                 else
//                 {
//                     b[i - 1][j] += a[i][j];
//                     b[i][j - 1] += a[i][j];
//                     b[i][j + 1] += a[i][j];
//                 }
//             }
//             else
//             {
//                 b[i - 1][j] += a[i][j];
//                 b[i][j - 1] += a[i][j];
//                 b[i][j + 1] += a[i][j];
//                 b[i + 1][j] += a[i][j];
//             }