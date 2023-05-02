#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a, a+4);

    cout<<(a[0]-a[1]+a[2])/2<<" "<<(a[0]+a[1]-a[2])/2<<" "<<(-a[0]+a[1]+a[2])/2<<" "<<" \n";
    return 0;
}