//~~~~~~~~~~~~~~~~~~~~~~~~~~ HEADER ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<bits/stdc++.h>
using namespace std;
 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
typedef long long int ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef map<int, int> mi;
typedef map<ll,ll> mll;
//~~~~~~~~~~~~~~~~~~~~~ MACROS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fi(a,b) for(int i=a;i<b;i++)
#define rfi(a,b) for(int i=a;i>b;i--)
#define fj(a,b) for(int j=a;i<b;j++)
#define rfj(a,b) for(int j=a;j>b;j--)
#define haa cout<<"YES";
#define naa cout<<"NO";
#define fs first
#define se second
#define mp make_pair
#define pb push_back
#define allv(v) v.begin(), v.end()
#define alla(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(allv(v))
#define REVERSE(v) reverse(allv(v))
#define MI INT_MIN
#define MA INT_MAX
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 ll cnth(string s){
    ll c=0;
    fi(0,s.length()){
        if(s[i]=='#'){
            c++;
        }
    }
    return c;
    
 }

  ll cntd(string s){
    ll c=0;
    fi(0,s.length()){
        if(s[i]=='.'){
            c++;
        }
    }
    return c;
    
 }


//~~~~~~~~~~~~~~~~~~~~ SOLUTION ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void solve_amar(){ 
    vector<string> v;
    fi(0,4){
        string s;
        cin>>s;
        v.pb(s);
    }
    fi(0,4){
        if(cnth(v[i])%2 != cnth(v[i+1])%2){
            haa
        }
    }
 
  return;
 }
 
//~~~~~~~~~~~~~~~~~~~~~~~ MAIN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
int main()
{
 fast;
 int amar=1; 
//  cin>>amar;
 while(amar--){
   solve_amar(); 
   cout<<endl;
 }
  return 0;
}