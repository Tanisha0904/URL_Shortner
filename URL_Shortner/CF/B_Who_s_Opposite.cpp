#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t; cin>>t; while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll n = abs(a-b)*2;
        if(n == 1 || c > n || a>n || b>n){
            cout<<"-1\n";
        } 
        else if(c+(n/2) <= n){
            cout<<c+(n/2)<<"\n";
        }
        else if(c-(n/2)<=n && c-(n/2)>0){
            cout<<c-n/2<<"\n";
        }
        else{
            cout<<"-1\n";
        }

    }
    return 0;
}