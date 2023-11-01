#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;

    int a = n % 11;
    int b = n - a * 111;

    if(b >= 0)
        if(b % 11 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    else cout << "NO" << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
