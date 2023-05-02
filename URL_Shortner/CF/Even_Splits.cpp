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
    ll o=0,z=0;
    string s;cin>>s;
    if(n<=2)return s;
    rep(i,0,n){
        if(s[i]=='1')o++;
        else z++;
    }
    if(z==0)return s;
    string ans="";
    rep(i,0,z){
        ans+='0';
    }
    rep(i,0,o){
        ans+='1';
    }
    return ans;
    

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