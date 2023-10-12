#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m; cin >> n >> m;

        string x; cin >> x;
        string s; cin >> s;

        size_t fnd = -1;
        int cnt = 0;
        while(1)
        {
            fnd = x.find(s);

            if(fnd != -1)
            {
                cout << cnt << endl;
                break;
            }
            else
            {
                cnt++;
                x += x;
            }

            if(cnt > 5)
            {
                cout << -1 << endl;
                break;
            }

        }
    }

    return 0;
}
