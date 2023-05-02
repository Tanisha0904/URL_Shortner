#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,i,j;
        cin>>n>>m>>i>>j;
        // int d1 = (n+m)>(abs(n-i)+ abs(m-j)) ? (n+m) : (abs(n-i)+ abs(m-j));
        ll x = (n) > abs(n-i) ? n : abs(n-i);
        ll y = (m) > abs(m-j) ? m : abs(m-j);
        cout<<x<<" "<<y<<" "<<abs(n-x+1)<<" "<<abs(m-y+1)<<"\n"; 

    }
    return 0;
}