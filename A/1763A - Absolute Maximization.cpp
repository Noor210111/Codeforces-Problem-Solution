#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;

        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        ll mx = *max_element(v.begin(), v.end());
        ll mn = *min_element(v.begin(), v.end());

        for(int i = 0; i < n; i++)
        {
            mx = mx & v[i];
            mn = mn | v[i];
        }

        cout << mn - mx << endl;
    }

    return 0;
}
