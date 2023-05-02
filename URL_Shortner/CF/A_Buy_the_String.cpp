#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl;
#define tc ll t;cin>>t;t*=2;while(t--)
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

    ll n,c0,c1,h;
    cin>>n>>c0>>c1>>h;
    string s;
    cin>>s;
    ll zero=0, one=0;
    sort(s.begin(), s.end());
    rep(i,0,n){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    ll cost=0;
    if(c0<c1){
        zero+=h;
        one-=h;

        if(one<0){
            cost=c0*zero;
        }
        else{
            cost=c0*zero+c1*one;
        }
    }
    if(c0>c1){
        zero-=h;
        one+=h;

        if(zero<0){
            cost=c1*one;
        }
        else{
            cost=c0*zero+c1*one;
        }
    }
    return cost;
    
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