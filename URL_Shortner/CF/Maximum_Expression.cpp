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

    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    string ans = "";
    ll m = 0, p = 0, z = 0;
    rep(i, 0, n)
    {
        if (s[i] == '+')
            p++;
        else if (s[i] == '-')
            m++;
        // else if(s[i]=='0')z++;
        else
            v.push_back(s[i]);
    }
    sort(v.begin(), v.end());

    int i;
    for(i=1;i< v.size();i+=2)
    {
        if(m==0)break;
        v.insert(v.begin() + i, '-');
        m--;
    }
    for(int j=i;j< v.size();j+=2)
    {
        if(p==0)break;

        v.insert(v.begin() + j, '+');
        p--;
    }
    re(i, v.size() - 1, 0)
    {
        cout << v[i];
    }
    // cout<<"\n";
    // re(k,v.size()-1,0){
    //     ans+=v[i];
    // }
    // rep(i, 1, v.size())
    // {
    //     ll j = 1;
    //     while (j < v.size() && m--)
    //     {
    //         v.insert(v.begin() + j, '-');
    //         j += 2;
    //     }
    //     while (j < v.size() && p--)
    //     {
    //         v.insert(v.begin() + j, '+');
    //         j += 2;
    //     }
    // }
    // rep(i, 1, v.size())
    // {
    //     while (i < v.size() && m--)
    //     {
    //         v.insert(v.begin() + i, '-');
    //         i += 2;
    //     }
    //     // while(p--){
    //     //     v.insert(v.begin()+i,'+');
    //     //     i+=2;
    //     // }
    // }
    // return ans;
    // return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        tan();
        cout<<endl;
        // cout << tan() << endl;
    }
    return 0;
}