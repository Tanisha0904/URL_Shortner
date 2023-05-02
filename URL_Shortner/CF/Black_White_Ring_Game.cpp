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

    ll n;
    cin >> n;
    ll a[n];
    rep(i, 0, n) cin >> a[i];
    ll o=0, z=0, p=0;
    rep(i,0,n){
        if(a[i]==1) o++;
        else if(a[i]==0) z++;
        if(i==0){
            if(a[i]==a[n-1])p++;
        }
        if(i<n-1)
            if(a[i]==a[i+1]) p++;
    }
    p-=abs(o-z);
    if(p%4==0){
        return "Bob";
    }
    return "Alice";

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