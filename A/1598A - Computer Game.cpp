#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;

    string s[2];
    cin >> s[0] >> s[1];

    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        if(s[0][i] == '1' && s[1][i] == '1')
        {
            flag = 0;
            break;
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
