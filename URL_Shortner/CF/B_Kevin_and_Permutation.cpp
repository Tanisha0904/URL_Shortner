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
    // vector<int> a={-1, n};
    vi v;
    // v.pb(n);
    // v.pb(1);
    // a[n/2]=1;
    // a[(n/2)-1]=n;
    
    // ll i=n;
    // while(k-- && i>=2){
    //     if(i>=2)
    //         v.pb(i-1);
    //     i--;
    //     if(i>=2)
    //         v.insert(v.begin(), i-2);
    //     i--;
    // }

    // while(v.size()<n){
    //     v.pb(i);
    //     i++;
    //     if(v.size()==n){
    //         break;
    //     }
    //     v.insert(v.begin(), i);
    //     i++;
    // }

    if(n%2!=0){
        rep(i,1,n/2 + 1){
            v.pb(i);
            v.pb(i+(n+1)/2);
        }
        v.pb((n+1)/2);
    }
    else {
        rep(i,1,n/2 + 1){
            v.pb(i+(n+1)/2);
            v.pb(i);
        }
    }
    rep(i,0,n){
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