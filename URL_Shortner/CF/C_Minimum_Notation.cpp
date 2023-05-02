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
string s;
    cin>>s;
    reverse(all(s));
    vi a(10, 0);
    int k=57;
    rep(i,0,s.size()){
        if(s[i]<=char(k)){
            a[s[i]-'0']++;
             k=s[i];
        }
        else {
            if(s[i]!='9'){
                a[s[i]-'0'+1]++;
            }
            else {
                a[9]++;
            }
        }
    }
    rep(i,0,10){
        while(a[i]--){
            cout<<i;
        }
    }
    nd
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    tan();
    // cout<<endl;
    // cout<<tan()<<endl;
}
    return 0;
}