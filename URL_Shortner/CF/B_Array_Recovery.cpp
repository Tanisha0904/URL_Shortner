#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl;
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<long long int>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define re(i,a,b) for(long long int i=a;i>=b;i--)
#define printVec(v) for(auto val:v)cout<<val<<" ";cout<<endl
#define auto(val,v) for(auto val:v)
using namespace std;
void tan(){

    ll n;
    ll k=0;
    cin>>n;
    // ll d[n];
    vi d;
    rep(i,0,n){
        ll c;
        cin>>c;
        // cin>>d[i];
        d.push_back(c);
    }
    vi a;
    bool m=false;
    rep(i,0,n){
        if(k>=d[i]){
            if(d[i]!=0){
                m=true;

break;            }
            else{
                k+=d[i];
                a.pb(k);
            }
        }
        else{
            k+=d[i];
                a.pb(k);
        }
    }
    
    if(!m) {printVec(a);}
    else {
    cout<<-1<<"\n";}
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    tan();
    // cout<<endl;
    // cout<<tan()<<endl;
}
    return 0;
}