#include <bits/stdc++.h>

#define vtr vector<int>
#define sz size()
#define pb push_back

using namespace std;

void solve();

int main()
{
    int t = 1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

void solve()
{
    int n, k; cin >> n >> k;

    int total = 240;

    total -= k;
    int i = 1;
    int slv = 0;
    int cnt = 0;
    while(total >= slv)
    {
        slv += 5 * i;
        i++;
        cnt++;
    }

    if(cnt > n)
        cout << n;

    else
        cout << cnt - 1;
}
