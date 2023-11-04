#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x, y, k; cin >> x >> y >> k;

        if(y <= x) cout << x << endl;
        else
        {
            if(y - x <= k) cout << y << endl;
            else cout << (x + k) + ((y - (x + k)) * 2) << endl;
        }
    }

    return 0;
}
