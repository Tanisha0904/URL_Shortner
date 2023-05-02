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
    int n;cin>>n;
    int a[n],cnt=0,cnt1=0;
    rep(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    int k=abs(a[0]-a[n-1]);
    // rep(i,0,n){
    //     rep(j,0,n){
    //         if(abs(a[i]-a[j])==k)cnt++;
    //     }
    // }
     map<int, int> m;
    for (int i = 0; i < n; i++)
        m[a[i]]++;
    
    if(m[a[0]]==n) cout<<n*n-1;
    else cout<<2*(m[a[0]]*m[a[n-1]]) ;
    



    
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