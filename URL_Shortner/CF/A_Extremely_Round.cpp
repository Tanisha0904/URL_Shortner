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
    if(n<=9){
        return n;
    }
    // if(n<=100){
    //     count+=
    // }
    string str=to_string(n);
    ll size=str.size();
    ll count = str[0]-'0';
    // ll k=pow(10,size-1);
    // ll count=0;
    // ll i=0;
    // if(n<=100){
    //     return 9+n/10;
    // }
    // while(n>=10){
    //     count+=n/k;
    //     n=n%k;
    //     k=k/10;
    // }
    // return count+10;
    ll var = 9*(size-1);
    return count+var;
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