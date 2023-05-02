#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl;
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<long long int>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define re(i,a,b) for(long long int i=a;i>=b;i--)
#define printVec(v) for(auto val:v)cout<<val<<" ";cout<<endl
#define auto(val,v) for(auto val:v)
using namespace std;
string tan(){

    ll a[2][2];
    vi v;

    rep(i,0,2){
        rep(j,0,2){
            cin>>a[i][j];
            v.pb(a[i][j]);
        }
    }
    
    // vi aa = v;
    sort(all(v));
    if(a[0][0] == v[0]){
        if(a[1][1]== v[3]){
            return "YES";
        }
    }
    
    if(a[0][1] == v[0]){
        if(a[1][0]== v[3]){
            return "YES";
        }
    }
    
    if(a[1][0] == v[0]){
        if(a[0][1]== v[3]){
            return "YES";
        }
    }
    
    if(a[1][1] == v[0]){
        if(a[0][0]== v[3]){
            return "YES";
        }
    }
    
    // ll k=0;
    // rep(i,0,3){
    //     if(aa[i]>aa[i+1]){
    //         k++;
    //     }
    // }
    // if(k){
    //     return "YES";
    // }
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