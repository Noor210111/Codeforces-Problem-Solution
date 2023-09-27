#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

void solve()
{
    lli n, k, x;
    cin >> n >> k >> x;

    lli sum1, sum2;

    sum1 = (k * (k + 1)) / 2;

    sum2 =((2 * n - k + 1) * k) / 2;

    if(sum1 <= x && sum2 >= x)
        cout << "YES" << endl;

    else cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}
