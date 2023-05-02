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
    ll a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a, a+n);
    for(ll i=1;i<n/2;i+=2){
        swap(a[i], a[n-i-1]);
    }
    ll k=0;
    rep(i,1,n-1){
        if((a[i-1]>a[i] && a[i+1]>a[i] ) || (a[i-1]<a[i] && a[i+1]<a[i] )){

            continue;
        }
        else {
            k=1;
            break;
        }
    }
    if(k==0){
        cout<<"YES\n";
        rep(i,0,n){
            cout<<a[i]<<" ";
        }
    }
    else{
        cout<<"NO";
    }
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    tan();
    cout<<endl;
//     cout<<tan()<<endl;
}
    return 0;
}