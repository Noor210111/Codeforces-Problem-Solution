#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        sort(v.begin(), v.end(), [] (int a, int b) {return a % 2 < b % 2;});

        int cnt = 0;
        for(int i = 0; i < n - 1; i++)
            for(int j = i + 1; j < n; j++)
                cnt += __gcd(v[i], v[j] * 2) > 1;

        cout << cnt << endl;
    }

    return 0;
}
