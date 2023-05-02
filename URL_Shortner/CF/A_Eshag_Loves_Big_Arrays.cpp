#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
         ll sum = 0;
         vector<ll> a;
         for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
            sum+=a[i];
         }
         ll avg = sum/n, count = 0;
         for(ll i=0;i<n;i++){
            if(a[i]>avg){
                count++;
                a.erase(i);
                i--;
            }
         }
         cout<<count<<"\n";

    }
    return 0;
}