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

        ll sum = 0;

        for(int i = 0; i < n; i++)
        {
            sum |= v[i];
        }

        cout << sum << endl;
    }

    return 0;
}
