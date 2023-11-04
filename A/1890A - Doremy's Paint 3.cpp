#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }

    if(n == 2) cout << "YES" << endl;
    else if((n == 3) && (v[0] == v[1] || v[1] == v[2] || v[0] == v[2]))
    {
        cout << "YES" << endl;
    }
    else if(n > 3)
    {
        //cout << "set" << s.size() << endl;
        if(s.size() > 2) cout << "NO" << endl;
        else
        {
            sort(v.begin(), v.end());

            if(v[0] == v[n - 1]) cout << "YES" << endl;
            else
            {
                int u1 = 0, u2 = 0;
                int flag = 0;
                for(int i = 0; i < n; i++)
                {
                    if(flag == 0) u1++;
                    else u2++;

                    if(v[i] != v[i + 1]) flag = 1;
                }
//cout << u1 << " " << u2 << endl;
                if(u1 == u2 || u1 + 1 == u2 || u1 == u2 + 1) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
    else cout << "NO" << endl;
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}
