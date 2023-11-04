#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        int x, k; cin >> x >> k;

        l:
        int sum = 0;
        int a = x;
        while(a)
        {
            sum += a % 10;
            a /= 10;
        }

        while(sum % k != 0)
        {
            x++;
            goto l;
        }

        cout << x << endl;
    }

    return 0;
}
