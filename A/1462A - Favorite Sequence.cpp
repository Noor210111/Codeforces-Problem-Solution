#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if(i == j) cout << v[i] << ' ';
        else cout << v[i] << ' ' << v[j] << ' ';
    }
    cout << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}
