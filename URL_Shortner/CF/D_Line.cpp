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
    ll n, sum=0;
    cin>>n;
    string s;
    cin>>s;
    vi v;
ll k=0;
    rep(i,0,n/2){
        sum+=n-i-1;
        
        s[i] = 'R';
        rep(j,i+1,n/2){
            if(s[j]=='L'){
                sum+=j;
            }
            else{
                sum+=n-j-1;
            }
        }
        v.pb(sum);
        k=i;
    }
    rep(i,n/2,n){
        sum+=n-i-1;
        s[i] = 'L';
        rep(j,i+1,n/2){
            if(s[j]=='L'){
                sum+=j;
            }
            else{
                sum+=n-j-1;
            }
        }
        v.pb(sum);
    }
    rep(i,0,v.size()){
        cout<<v[i]<<" ";
    }
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