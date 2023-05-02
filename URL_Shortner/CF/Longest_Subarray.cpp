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
ll OR(vector<ll> a, ll n)
{
    ll ans = a[0];
    for (ll i = 1; i < n; ++i)
         ans |= a[i];   
 
    return ans;
}

vector<ll>  bor(ll ind, vector<ll> b, vector<ll> ds){
    if(ind>=b.size()){
        return ds;
    }
    ds.pb(b[ind]);
    bor(ind+1, b, ds);
    ds.remove(b[ind]);
    bor(ind+1, b, ds);


}
ll tan(){

    ll n;cin>>n;
    ll a[n];
    rep(i,0,n){cin>>a[i];}
    vector<ll> b, ds;
    
    bor(0,a,ds);
    


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