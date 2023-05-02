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
    if(n%3==0){
        cout<<n/3<<" "<<n/3<<" "<<n/3;
        return;
    }
    cout<<1<<" "<<2<<" "<<n-3;
    return ;

}
int main(){
// ios::sync_with_stdio(false); cin.tie(0);
// tc{
    tan();
    cout<<endl;
    // cout<<tan()<<endl;
// }
    return 0;
}