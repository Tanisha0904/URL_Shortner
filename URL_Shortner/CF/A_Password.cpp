#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl;
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<int>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define re(i,a,b) for(long long int i=a;i>=b;i--)
#define printVec(v) for(auto val:v)cout<<val<<" ";cout<<endl
#define auto(val,v) for(auto val:v)
using namespace std;
ll factorial(ll n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
ll tan(){

    ll n;cin>>n;
    ll a[n];
    rep(i,0,n){
        cin>>a[i];
    }

    ll count=0;
        ll b[10]={0,1,2,3,4,5,6,7,8,9};

    sort(a, a+n);
    rep(i,0,n){
                if ((binary_search(b, b + 10, a[i])))count++;

    }
    // cout<<count<<" ";
    count=10-count;
    // ll fact = factorial(count);
    // ll deno = factorial(count-2);
    
    // return 2*fact/deno;
    return count*(count-1)*3;
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    //tan();
    //cout<<endl;
    cout<<tan()<<endl;
}
    return 0;
}