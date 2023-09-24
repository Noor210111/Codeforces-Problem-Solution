#include <bits/stdc++.h>

typedef long long int lli;
using namespace std;

void solve()
{
    lli n; cin >> n;

    vector<int> a(n), b(n);

    lli suma = 0, sumb = 0;
    lli mina = INT_MAX, minb = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
        if(a[i] < mina) mina = a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
        sumb += b[i];
        if(b[i] < minb) minb = b[i];
    }

    suma = suma + (n * minb);
    sumb = sumb + (n * mina);

    cout << min(suma, sumb) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1; cin >> t;
    while(t--)
        solve();

    return 0;
}
