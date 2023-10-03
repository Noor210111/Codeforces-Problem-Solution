#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, c = 0;
    float x;

    cin >> n >> x;

    int a[n];

    for(i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] <= x)
            c++;
        else c = c + ceil(a[i] / x);
    }

    cout << c << endl;

    return 0;
}
