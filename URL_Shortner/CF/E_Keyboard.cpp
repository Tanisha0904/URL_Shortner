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

    char c;
    cin >> c;
    string s;
    cin >> s;
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";
    string a="";
    if (c == 'R')
    {
        rep(i, 0, s.size())
        {
            size_t found = s1.find(s);
            if (found != string::npos)
                // cout << found + 1 << " ";
                a+=found;
            
             found = s2.find(s);
            if (found != string::npos)
                // cout << found + 1 << " ";
                a+=found;

             found = s3.find(s);
            if (found != string::npos)
                // cout << found + 1 << " ";
                a+=found;

                
        }
    }
    if (c == 'L')
    {
        rep(i, 0, s.size())
        {
            size_t found = s1.find(s);
            if (found != string::npos)
                // cout << found + 1 << " ";
                a+=found;
            
             found = s2.find(s);
            if (found != string::npos)
                // cout << found + 1 << " ";
                a+=found;

             found = s3.find(s);
            if (found != string::npos)
                // cout << found + 1 << " ";
                a+=found;

                
        }
    }
    return a;
}
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // tc
    // {
        // tan();
        // cout<<endl;
        cout << tan() << endl;
    // }
    return 0;
}