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
string tan(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double m = ((3*a/10)*a - (a/250)*c);
    double v = ((3*b/10)*b - (b/250)*d);
    if(m>v)return "Misha";
    else if(v>m) return "Vasya";
    return "Tie";
    
}
int main(){

    cout<<tan()<<endl;

    return 0;
}