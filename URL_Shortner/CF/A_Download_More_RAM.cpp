#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<int>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define re(i,a,b) for(long long int i=a;i>=b;i--)
#define pVec(v) for(auto e:v)cout<<e<<" ";cout<<"\n"
#define aut(e,v) for(auto e:v)
using namespace std;
ll tan(){

    ll n,k;
    cin>>n>>k;
    ll a[n], b[n], count=k;
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];
    ll i=0;
    while(i<n){
        if(a[i]<=k && a[i]>0){
            // count+=b[i];
            k+=b[i];
            a[i]=-1;
            i=-1;
        }
        i++;
    }
    return k;
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    cout<<tan()<<endl;

}
    return 0;
}       