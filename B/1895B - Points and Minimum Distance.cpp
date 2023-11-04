#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        vector<int> v(2 * n);
        for(int i = 0; i < 2 * n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        long long sum = 0;

        for(int i = 0, j = 2 * n - 1; i < n - 1; i++, j--)
        {
            sum += abs(v[i] - v[i + 1]) + abs(v[j] - v[j - 1]);
        }

        cout << sum << endl;

        for(int i = 0, j = 2 * n - 1; i < n; i++, j--)
        {
            cout << v[i] << ' ' << v[j] << endl;
        }

    }

    return 0;
}
