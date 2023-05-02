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
    ll n;
    cin>>n;
    ll x;
    char b;
    if(n%4==1){
        x = 0;
        b='A';
    }
    else if(n%4==3){
        x = 2;
        b='A';
    }
    else if(n%4==2){
        x=1;
        b='B';
    }
    else if(n%4==0){
        x=1;
        b='A';
    }
    cout<<x<<" "<<b<<"\n";
    
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
// tc{
    tan();
    cout<<endl;
//     cout<<tan()<<endl;
// }
    return 0;
}