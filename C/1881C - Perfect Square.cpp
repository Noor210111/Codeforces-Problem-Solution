#include <bits/stdc++.h>

#define vtr vector<int>
#define sz size()
#define pb push_back

using namespace std;

void solve();

int main()
{
    int t = 1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

void solve()
{
    int n; cin >> n;

    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    int cnt = 0;
    for(int i = 0; i < n / 2; i++)
    {
        vector<char> v1, v2, v3, v4;

        for(int j = i; j < n - i - 1; j++)
            v1.pb(s[i][j]);

        for(int j = n - i - 1; j >= i + 1; j--)
            v2.pb(s[n - i - 1][j]);

        for(int j = i; j < n - i - 1; j++)
            v3.pb(s[j][n - i - 1]);

        for(int j = n - i - 1; j >= i + 1; j--)
            v4.pb(s[j][i]);

        for(int k = 0; k < v1.sz; k++)
        {
            char c = max(max(max(v1[k], v2[k]), v3[k]), v4[k]);

            cnt += c - v1[k];
            cnt += c - v2[k];
            cnt += c - v3[k];
            cnt += c - v4[k];
        }
    }
    cout << cnt << endl;
}
