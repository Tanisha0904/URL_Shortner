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

string ans(){
    string s;
        cin>>s;
        ll n = s.size();
        ll k = 0;
        ll i;
        rep(i, 0, n){
            if(s[i]=='a'){
                k = 1;
                break;
            }
        }
        cout<<s[i];
        while(i<n || i>=0){
            if(s[i]+1==s[i+1]){
                i=i+1;
            }
            else if(s[i]+1==s[i-1]){
                i=i-1;
            }
            else{
                return "NO";
            }
        }
        if(i==0 || i==n){
            return "YES";
        }
        if(k!=0){
            return "NO";
        }
        return "NO";
}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
    tc{
        cout<<ans()<<"\n";
    }
    return 0;
}