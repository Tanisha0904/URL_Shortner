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

    ll x,y;
    cin>>x>>y;
    // ll a,b,c;
    // b = y;
    // // a+c=3*x-y;
    // a = 0;
    // c = 3*x-y;
    // cout<<a<<" "<<b<<" "<<c;
    ll a[3];
a[1] = y;
a[0] = 0;
a[2] = 3*x-y;
sort(a,a+3);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2];

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