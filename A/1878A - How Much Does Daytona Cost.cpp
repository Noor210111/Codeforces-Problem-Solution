#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    int a[n];
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == k)
        {
            flag = 1;
        }
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
