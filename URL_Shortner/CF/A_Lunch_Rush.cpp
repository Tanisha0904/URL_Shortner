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

    ll n,k;cin>>n>>k;
    ll a[n][2];rep(i,0,n)cin>>a[i][0]>>a[i][1];
    vi v;
    rep(i,0,n){
        if(a[i][1]>k){
            v.pb(a[i][0]+k-a[i][1]);
        }
        else{
            v.pb(a[i][0]);
        }

    }
    return *max_element(all(v));

}
int main(){
// ios::sync_with_stdio(false); cin.tie(0);
// tc{
    //tan();
    //cout<<endl;
    cout<<tan()<<endl;
// }
    return 0;
}