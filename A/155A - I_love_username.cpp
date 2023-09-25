#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int l = a[0], m = a[0];
    int cnt = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] > m)
        {
            cnt++;
            m = a[i];
        }
        else if(a[i] < l)
        {
            cnt++;
            l = a[i];
        }
    }

    cout << cnt;

    return 0;
}
