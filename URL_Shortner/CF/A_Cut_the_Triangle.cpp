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

    ll a[2],b[2], c[2];
    // ll empty;cin>>empty;
    cin>>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1];
    
    if(a[0]==b[0] || a[0]==c[0] || b[0]==c[0]){
        if(a[1]==c[1] || b[1]==c[1] || b[1]==a[1]){
            return "NO";
        }
    }
    return "YES";

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