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
ll tan(){

    ll n,k;
    cin>>n>>k;
    ll a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    ll c=0;
    // ll mx = *max_element(a, a+n);
    vector<ll> sum;
    
    rep(i,0,n-k){        
        sum.pb(a[i]+a[i+1]+a[i+2]);
    }


    rep(i,0,n){
        if(c>k)
        break;
        if(k+i<n){
            swap(a[i], a[k+i]);
            c++;
        }
        sum.pb(a[i]+a[i])
    }

return *max_element(sum.begin(), sum.end());
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