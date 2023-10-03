#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve();

int main()
{
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}

void solve()
{
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++)
        cin >> v[i];

    ll ans = 0;
    for(ll i = 0; i < n; i++)
    {
        ans ^= v[i];
    }

    if(n % 2 == 0)
    {
        if(ans == 0) cout << 0 << endl;
        else cout << -1 << endl;
    }
    else cout << ans << endl;
}
