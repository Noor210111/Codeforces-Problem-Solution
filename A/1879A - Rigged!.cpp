#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> pr(n);

    int x, y;
    for(int i = 0; i < n; i++)
    {
        if(i == 0) cin >> x >> y;

        else cin >> pr[i].first >> pr[i].second;
    }

    int flag = 0;
    for(int i = 1; i < n; i++)
    {
        if(pr[i].first >= x && pr[i].second >= y)
        {
            flag = 1;
            break;
        }


    if(flag == 1) cout << -1 << endl;
    else cout << x << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1; cin >> t;
    while(t--)
        solve();

    return 0;
}
