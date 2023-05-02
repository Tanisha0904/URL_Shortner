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
    ll k;cin>>k;
    string q;
    cin>>q;
    if(k==0 || k>q.size()){
        cout<<"NO";
    }
    else if(k==1){
        cout<<"YES\n"<<q;

    }
    else{
        ll count=0;
        string s=q;
        sort(q.begin(), q.end());
        rep(i,0,q.size()-1){
            if(q[i]!=q[i+1]){
                count++;
            }
        }
        if(count<=k){
            ll m=k;
            cout<<"YES\n";
            ll i=0;
            for(i=0;i<s.size()-1 && k>0;i++){
                if(s[i]==s[i+1]){
                    cout<<s[i];
                   
                }
                else{
                    cout<<s[i];
                    k--;
                }
            }
            rep(j,i,s.size()){
                cout<<s[j];
            }
        }
    }
    
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