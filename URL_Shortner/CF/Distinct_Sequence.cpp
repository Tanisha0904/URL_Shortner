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
void tan(){

    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<char,ll>> v;
    rep(i,0,2*n){
        v.pb(make_pair(s[i], i+1));
        // cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    sort(all(v));
    // rep(i,0,2*n){
    //     cout<<v[i].first<<" "<<v[i].second<<"\n";
        
    // }
    string a="", b="";
    rep(i,0,n){
        a+=v[i].first;
        b+=v[n+i].first;
    }
    if(a==b){
     
        cout<<-1;
        return ;
    }
    rep(i,0,n){
        cout<<v[i].second<<" ";
    }
    return ;
    
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    tan();
    cout<<endl;
    // cout<<tan()<<endl;
}
    return 0;
}