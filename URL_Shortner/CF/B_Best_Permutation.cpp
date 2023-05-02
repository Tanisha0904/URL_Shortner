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

    ll n;cin>>n;
    if(n%2!=0){
        re(i,n-3,1){
            cout<<i<<" ";
        }
        cout<<n-2<<" "<<n-1<<" "<<n;
        return;
    }
    for(ll i=n-2;i>=1;i--){
        cout<<i<<" ";
        
    }
    cout<<n-1<< " "<<n;
    return;
    // ll a=n/2;
    // ll b=a-1;
    // re(i,n-1,1){
    //     if(i!=a && i!=b){
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<b<< " "<<a<<" "<<n;

    
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