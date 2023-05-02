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
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll count = 0;
        // cout<<sum<<" ";
        sort(a, a+n);
        if(sum%n==0){
            ll avg = sum/n;
            for(int i=n-1;i>=0;i--){
                if(a[i]>avg){
                    count++;
                }
            }
            cout<<count<<"\n";
        }
        else{
            cout<<"-1"<<"\n";
        }

    }
    return 0;
}