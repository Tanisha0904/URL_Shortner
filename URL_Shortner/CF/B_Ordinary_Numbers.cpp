#include <bits/stdc++.h>
#include <sstream> // for string streams
#include <string>  // for string
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ostringstream str1;
        str1 << n;
        string s = str1.str();
        int d = s.size();
        // cout << d << " ";
        int x = 1;
        for (int i = 2; i <= d; i++)
        {
            x = x + pow(10 , i-1);
        }
        // cout << x << "  ";
        cout << (n / x + 9 * (d - 1)) << "\n";
    }
    return 0;
}