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
string tan(){

    ll n;cin>>n;
    ll a[n];
    ll sum=0;
    rep(i,0,n){cin>>a[i];
    sum+=a[i];}
    if(n==1)return "YES";
//     ll b[n+1];
//     b[0]=a[0];
//     b[n]=a[n-1];
//     rep(i,1,n){
//         b[i]=a[i]*a[i-1];
//     }
//     rep(i,0,n){
//         if(__gcd(b[i+1], b[i])!=a[i]){
//             return "NO";
//         }
//     }
// return "YES";
if(sum%2==0){
    return "YES";
}
return "NO";

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