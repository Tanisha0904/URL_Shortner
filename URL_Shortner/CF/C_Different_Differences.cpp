#include<bits/stdc++.h> 
#define ll long long int
#define nd cout<<endl;
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
void compute(){
    int a,b;
    cin>>a>>b;
    int ans=1,s=1;
    cout<<"1"<<" ";
    for(int i=1;i<=a-1;i++){
        if((b-i+1-ans)<a-i){
            ans++;
        }
        else {ans+=i;}
        cout<<ans<<" ";
    }
    nd
}

signed main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 tc
 compute();
 return 0;
}