#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];

    sort(a, a + n);

    int m;
    cin >> m;

    while(m--)
    {
        int k;
        cin >> k;

        int ans;
        ans = upper_bound(a, a + n, k) - a;
        cout << ans << endl;
    }

    return 0;
}
