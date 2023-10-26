#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    long long mxsum = 0;
    int t = 0, op = 0, flag = 0;

    for(int i = 0; i < n; i++)
    {
        mxsum += abs(v[i]);

        if(v[i] < 0)
        {
            if(v[i] < 0)
            {
                t++;
                flag = 1;
            }
        }

        else if(v[i] == 0 && flag == 1) t++;

        else
        {
            if(t != 0) op++;
            t = 0;
            flag = 0;
        }
    }

    if(t != 0) op++;

    cout << mxsum << ' ' << op << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}
