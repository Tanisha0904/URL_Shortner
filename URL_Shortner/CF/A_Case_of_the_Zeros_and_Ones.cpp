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

    ll n;cin>>n;
    string s;cin>>s;
    sort(all(s));
    ll i=0, z=0;

    while(s[i]=='0'){
        z++;
        i++;
    }

    return abs(z-abs(n-z));
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