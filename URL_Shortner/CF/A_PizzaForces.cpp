#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ans(){
    ll n;
    cin>>n;
    if(n<6){
        return 15;
    }
    else if(n%2==0){
        return n*5/2;
    }
    else{
        return (n+1)*5/2;
    }

}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout<<ans()<<"\n";
    }
    return 0;
}