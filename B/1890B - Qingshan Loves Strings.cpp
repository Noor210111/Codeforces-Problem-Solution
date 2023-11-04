#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m; cin >> n >> m;

    string s, t; cin >> s >> t;

    int flag = 1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == s[i + 1]) flag = 0;
    }

    if(flag == 1) cout << "YES" << endl;
    else
    {
        int flag2 = 1;
        for(int i = 0; i < m; i++)
        {
            if(t[i] == t[i + 1]) flag2 = 0;
        }
        if(flag2 == 0) cout << "NO" << endl;
        else
        {
            if(t.size() % 2 == 0) cout << "NO" << endl;
            else
            {
                char x = t[0];
                int flag3 = 1;
                for(int i = 0; i < n; i++)
                {
                    if(s[i] == s[i + 1])
                    {
                        if(s[i] == x)
                        {
                            cout << "NO" << endl;
                            flag3 = 0;
                            break;
                        }
                    }
                }
                if(flag3 == 1) cout << "YES" << endl;
            }
        }
    }
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}
