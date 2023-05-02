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

    ll n;
    cin>>n;
    ll sum=0; 
    ll r=0; //r ->remainder

    while(n>9){ //to add extra coins from given n
        // r+=n%10;
        ll x = n-n%10;
        sum+= x;
        n=(n/10) +n%10;



        // r=n%10;
        // ll x = n-n%10;
        // sum+=x;
        // n=n/10+n%10;
    }
    // while(r!=0){ //to add extra coins from extra gained coins
    //     r=floor(r/10);
    //     sum+=r;
    // }
    // sum+=r/10;
    return sum+n;
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