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
string tan(){

    ll n;cin>>n;
    vi v;
    ll a[n];rep(i,0,n){
        cin>>a[i];
        v.pb(a[i]);
    }
    sort(a,a+n);
    if(a[0]==a[1]){
        return "Still Rozdil";
    }

    rep(i,0,n){
        if(a[0]==v[i]){
            return to_string(i+1);
        }
    }
        return "Still Rozdil";

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