#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        ll ar[n];
        for(ll i = 0; i < n; i++) cin >> ar[i];

        ll cnt = b;

        for(ll i = 0; i < n; i++)
        {
            if(ar[i] < a) cnt += ar[i];
            else cnt += (a - 1);
        }

        cout << cnt << endl;
    }
}
