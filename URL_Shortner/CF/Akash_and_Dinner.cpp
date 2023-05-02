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

bool sortbyCond(const pair<ll, ll>& a,
                const pair<ll, ll>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}

ll tan(){

    ll n,k;cin>>n>>k;
    vector<pair<ll,ll>> v,vv;
    ll a[n], b[n];
    rep(i,0,n){
        cin>>a[i];
    }
    rep(i,0,n){
        cin>>b[i];
    }
    
    rep(i,0,n){
        
        v.pb(make_pair(a[i], b[i]));
    }
    
    sort(v.begin(), v.end(), sortbyCond);
    // rep(i,0,n){
    //     cout<<v[i].first<<" "<<v[i].second<<"\n";
    // }
    rep(i,0,n-1){
        while(v[i].first==v[i+1].first){
            i++;
        }
        vv.pb(make_pair(v[i].second, v[i].first));
    }
    if(v[n-2].first!=v[n-1].first){
        vv.pb(make_pair(v[n-1].second, v[n-1].first));
    }
    sort(all(vv));
    // rep(i,0,vv.size()){
    //     cout<<vv[i].first<<" "<<vv[i].second<<"\n";
    // }
    // rep(i,0,n-1){
    //     ll mn=v[i].second;
    //     while(v[i].first==v[i+1].first){
    //         mn=min(mn, v[i+1].second);
    //         i++;
    //     }
    //     vv.pb(make_pair(mn,v[i].first));
    //     // i--;
    // }
    
    ll sum=0;
    // // ll cat=1;
    // sort(all(vv));
    if(k>vv.size()){
        return -1;
    }
    rep(i,0,k){
        // cat++;
        
        sum+=vv[i].first;
    }
    return sum;
    // return 0;

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