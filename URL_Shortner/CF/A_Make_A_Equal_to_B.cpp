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

    ll n,az=0,ao=0,bz=0,bo=0;cin>>n;
    ll a[n], b[n];
    rep(i,0,n){
        cin>>a[i];
        if(a[i]==0)az++;
        else ao++;
    }
    rep(i,0,n){
        cin>>b[i];
        if(b[i]==0)bz++;
        else bo++;
    }
    if(ao==bo){
        rep(i,0,n){
            if(a[i]!=b[i]){
                return 1;
            }
        }
        return 0;

    }
    ll count=min(abs(ao-bo), abs(az-bz));
    ll k=count;
    for(ll i=0;i<n && k>=0;i++){
        if(a[i]!=b[i]){
            k--;
            a[i]=b[i];
        }
    }
    rep(i,0,n){
        if(a[i]!=b[i]){
        count++;
        break;
        }

    }
    return count;
    

    
    // sort(a,a+n);
    // sort(b,b+n);



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