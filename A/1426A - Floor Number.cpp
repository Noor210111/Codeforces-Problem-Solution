#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, c;
    float x;

    cin >> t;

    while(t--)
    {
        cin >> n >> x;
        if(n <= 2) cout << 1 << endl;
        else
        {
            n = n - 2;
            cout << ceil(n / x) + 1<< endl;
        }
    }

    return 0;
}
