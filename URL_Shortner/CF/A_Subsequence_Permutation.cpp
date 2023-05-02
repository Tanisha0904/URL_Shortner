#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define re(i,a,b) for(int i=a;i>=b;i--)
#define pVec(v) for(auto e:v)cout<<e<<" ";cout<<"\n"
#define aut(e,v) for(auto e:v)
using namespace std;
int main(){
ios::sync_with_stdio(false); cin.tie(0);
    tc{
        ll n, count = 0;
        cin>>n;
        string s;
        cin>>s;
        string a = s;
        sort(a.begin(), a.end());
        rep(i, 0, n){
            if(a[i]!=s[i]){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}