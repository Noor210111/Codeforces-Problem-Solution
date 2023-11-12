#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    int t = 1;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a + b >= 10)
            cout << "YES" << endl;

        else if(b + c >= 10)
            cout << "YES" << endl;

        else if(a + c >= 10)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
