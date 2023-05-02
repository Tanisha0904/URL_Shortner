#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<int>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define re(i,a,b) for(int i=a;i>=b;i--)
#define pVec(v) for(auto e:v)cout<<e<<" ";cout<<"\n"
#define aut(e,v) for(auto e:v)
using namespace std;
void swap(int &a, int &b){
    ll temp = a;
    a = b;
    b = temp;
}
void tan(){

    ll n;
    cin>>n;
    ll a[2*n];
    rep(i, 0, 2*n){
        cin>>a[i];
    }
    sort(a, a+2*n);
    rep(i,0,2*n-1){
        swap(a[i], a[i+1]);
        i++;
    }
    
    rep(i,0,2*n){
        cout<<a[i]<<" ";
    }
    // rep(i,0,n){
    //     cout<<a[i]<<" "<<a[i+n]<<" ";
    // }
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    tan();
    cout<<endl;
}
    return 0;
}