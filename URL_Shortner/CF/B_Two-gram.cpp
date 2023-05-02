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
    string res="";
    string s;cin>>s;
    map<string,int> m;
    rep(i,1,n){
        string k=s[i]+s[i+1];
        m[k]++;
    }
    ll mxcount=0;
    for(auto x:m){
      if(x.second>mxcount){
         res= x.first;
         mxcount=x.second;
      }
   }
   return res;
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