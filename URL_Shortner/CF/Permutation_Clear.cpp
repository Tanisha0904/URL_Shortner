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

void tan(){

    ll n;
    cin>>n;
    vi a;

    rep(i,0,n){
        ll x;
        cin>>x;
        a.pb(x);
    }
    ll k;
    cin>>k;
    vi b;

    rep(i,0,k){
        ll x;
        cin>>x;
        b.pb(x);
    }
    // sort(all(b));
    // rep(i,0,k){
    //     // auto it = find(all(a), b[i]);
    //     // if(it!=a.end()){
    //     //     a.erase(it);
    //     // }
    //     // else{
    //     //     cout<<*it<<" ";
    //     // }
    //     a.erase(std::remove(a.begin(), a.end(), b[i]), a.end());


    // }
    rep(i,0,k){
        // for (auto it = a.begin(); it != a.end(); it++) {
        // if (*it == b[i]) {
        //     a.erase(it);
        // }
    // }
    a.erase(std::remove(a.begin(), a.end(), b[i]), a.end());
    }
    printVec(a);

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    tc
    {
        tan();
        // cout<<endl;
        // cout<<tan()<<endl;
    }
    return 0;
}