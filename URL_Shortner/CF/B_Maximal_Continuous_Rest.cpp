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

    ll n;
    cin>>n;
    ll a[n];
    vi v;

    rep(i,0,n){
        cin>>a[i];
        v.pb(a[i]);
    }
    rep(i,0,n){
        v.pb(a[i]);
    }
    // ll i=0;
    // ll mcount=0;
    // ll k=0;
        for(i=0;i<n;i++){
           

        if(a[i]==1){
            ll count=0;
            while(a[i]==1 && i<n){
                count++;
                i++;
                if(i==n-1){
                    i=0;
                    k=1;
                }
            }
            mcount = max(count, mcount);
        }
    }
    // cout<<i<<" ";
    // if(){
    //     if(a[n-1]==1 && a[0]==1){
    //         mcount++;
    //     }
    // }

    rep(i,1,v.size()){
         if(v[i]==1){
            
                v[i]=v[i-1]+1 ;
            }
    }
    // return mcount;
    return *max_element(v.begin(), v.end());
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