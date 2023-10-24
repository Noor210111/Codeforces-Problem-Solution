#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, s; cin >> n >> s;

        int i = (n + 1) / 2;
        int div = n - (i - 1);

        cout << (s / div) << endl;
    }

    return 0;
}
