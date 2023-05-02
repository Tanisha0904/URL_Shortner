#include <bits/stdc++.h>
using namespace std;
#define ll long long
string ans()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    return "NO";
                }
            }
        }
    }
    return "YES";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << ans() << "\n";
    }
    return 0;
}