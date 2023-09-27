#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    int a[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int r = max(a[0], l - a[n - 1]) * 2;

    for(int i = 0; i < n - 1; i++)
        r = max(r, a[i + 1] - a[i]);

    cout.precision(20);

    cout << fixed << r / 2.0 << endl;

    return 0;
}
