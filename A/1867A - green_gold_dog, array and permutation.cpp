#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve()
{
    ll n; cin >> n;

    vector<pair<ll, ll>> v(n);
    vector<ll> u(n);

    for(ll i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end(), greater<pair<ll, ll> >());

    for(ll i = 0; i < n; i++) u[v[i].second] = i + 1;

    for(ll i = 0; i < n; i++) cout << u[i] << ' ';

    cout << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}
