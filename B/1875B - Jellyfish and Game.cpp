#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve();

int main()
{
	int t;	cin >>  t;

	while(t--)
        solve();

    return 0;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> v1(n), v2(m);

    for(ll i = 0; i < n; i++) cin >> v1[i];
    for(ll i = 0; i < m; i++) cin >> v2[i];

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    if(k % 2 == 0)
    {
        if(v1[0] < v2[m - 1])
        {
            swap(v1[0], v2[m - 1]);

            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
        }

        if(v2[0] < v1[n - 1])
        {
            swap(v1[n - 1], v2[0]);

            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
        }
    }
    else
    {
        if(v1[0] < v2[m - 1])
        {
            swap(v1[0], v2[m - 1]);

            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
        }
    }

    ll cnt = 0;
    for(ll i = 0; i < n; i++) cnt += v1[i];

    cout << cnt << endl;
}
