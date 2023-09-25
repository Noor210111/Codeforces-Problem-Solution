#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);
    vector<int> b;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int x = 1;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == x) x++;
        b.push_back(x);
        x++;
    }

    cout << b[n - 1] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}
