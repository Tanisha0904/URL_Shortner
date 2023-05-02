#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ans()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], s[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i] = a[i];
    }
    sort(s, s + n);

    if (n == k)
    {
        return 0;
    }

    ll count = 0;
    for (ll i = 0; i < k; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (a[i] == s[j] && j >= k)
            {
                count++;
            }
        }
    }

    // for(ll i=0;i<k;i++){
    //     ll min = a[i];
    //     ll minIndex = i;
    //     for(ll j=i+1;j<n;j++){
    //         if(a[j]<min && j>=k){
    //             min = a[j];
    //             minIndex = j;
    //             ll temp = a[i];
    //             a[i] = a[j];
    //             a[j] = a[i];
    //             count++;
    //         }

    //     }
    // }

    return count;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout << ans() << "\n";
    }
    return 0;
}