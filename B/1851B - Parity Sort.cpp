#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> v2(n);
    v2 = v;

    sort(v2.begin(), v2.end());

    int flag = 1;
    for(int i = 0; i < n; i++)
        if(v[i] % 2 != v2[i] % 2)
        {
            flag = 0;
            break;
        }

    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}
