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
bool issafe(ll row, ll col, vector<pii> v){
    rep(i,0,v.size()){
        if(row==v[i].first || col==v[i].second){
            return false;
        }
    }
    return true;
}
string tan(){

    ll n,m;
    cin>>n>>m;
    vector<pii> v;
    rep(i,0,m){
        ll x,y;
        cin>>x>>y;
        v.pb(make_pair(x,y));
    }
    sort(all(v));
    return m<n ? "YES" : "NO";
    
    
//     ll i=v[0].first;
//     ll j=v[0].second;
//     ll k=0;
//     while(k<v.size()){
//         ll i=v[k].first;
//     ll j=v[k].second;
//         if(issafe(i,j,v)){
//                 return "YES";
//         }
// k++;
//     }
    // rep(i,v[0].first,n){
    //     rep(j,v[0].second,n){
            
    //         if(issafe(i,j,v)){
    //             return "YES";
    //         }
    //     }
    // }
    

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