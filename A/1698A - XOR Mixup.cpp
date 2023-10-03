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

    for(int i = 0; i < n; i++)
    {
        int bit = 0, cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                bit ^= v[j];
            }
            else cnt = v[i];
        }

        if(bit == cnt)
        {
            cout << cnt << endl;
            break;
        }
    }
}
