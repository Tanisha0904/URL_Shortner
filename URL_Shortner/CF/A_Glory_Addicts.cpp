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
ll tan(){

    ll n;cin>>n;
    ll z=0,o=0;
    ll a[n];rep(i,0,n){
        cin>>a[i];
        if(a[i]==0)z++;
        else o++;
    }
    ll b[n];rep(i,0,n){
        cin>>b[i];
    }
    // vector<pair<int, int>>v;
    vi zero;
    vi one;
    rep(i,0,n){
        // v.pv(make_pair(a[i], b[i]));
        if(a[i]==0){
            zero.pb(b[i]);
        }
        else{
            one.pb(b[i]);
        }

    }
    sort(all(zero));
    sort(all(one));
    ll sum=0;
    ll mi=min(z,o);
    ll mx=max(z,o);
    // if(z==o){
    //     if(zero[z-1]>one[o-1]) o--;
    //     else z--;
    // }
    if(z==o){
        if(zero[0]<one[0]){
            sum+=one[0];
            rep(i,1,o){
                sum+=2*one[i];
            }
            rep(i,0,z){
                sum+=2*zero[i];
            }
        }
        else{
          sum+=zero[0]  ;
          rep(i,1,z){
                sum+=2*zero[i];
            }
            rep(i,0,o){
                sum+=2*one[i];
            }
        }
        
    }
    else{

    
    while(z && o){

        
            sum+=zero[z-1]*2;
            sum+=one[z-1]*2;
            z--;
            o--;
            
        
    }
    // ll o1=o;
    // while(z && o1){
    //     // sum+=2*max(zero[z-1], one[o-1] );
    //     // mx--;
    //     // if(mi){
    //     //     sum+=2*min(zero[z-1], one[o-1] );
    //     //     mi--;
    //     // }
        
    //         sum+=zero[z-1]*2;
    //         z--;
    //         o1--;
            
        
    // }
    // ll z1=z;

    // while(z1 && o){
    //     // sum+=2*max(zero[z-1], one[o-1] );
    //     // mx--;
    //     // if(mi){
    //     //     sum+=2*min(zero[z-1], one[o-1] );
    //     //     mi--;
    //     // }
        
            
    //         sum+=one[o-1]*2;
    //         z1--;
    //         o--;
            
        
    // }
    if(z){
        while(z){
            sum+=zero[z-1];
            z--;
        }
    }
    else{
        while(o){
            sum+=one[o-1];
            o--;

        }
    }
    }
return sum;


}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    //tan();
    //cout<<endl;
    cout<<tan()<<endl;
}
    return 0;
}