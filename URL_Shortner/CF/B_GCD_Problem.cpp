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
#define rep(i, a, b) for (long long int i = a; i <= b; i++)
#define re(i, a, b) for (long long int i = a; i > b; i--)
#define printVec(v)         \
    for (auto val : v)      \
        cout << val << " "; \
    cout << endl
#define auto(val, v) for (auto val : v)
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    int iter = 2;
    while (iter <= sqrt(n))
    {
        if (n % iter == 0)
            return false;
        iter++;
    }
    return true;
}
void tan()
{

    ll n;
    cin >> n;
    int a, b, c = 1;
    
    if(n%2==0){
        a=n-3;
        b=2;
    }
    else{
        int d=(n-1)/2;
        if(d%2==0){
            a=d+1;
            b=d-1;
        }
        else{
            a=d+2;
            b=d-2;
        }
    }
    cout << a << " " << b << " " << c;
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