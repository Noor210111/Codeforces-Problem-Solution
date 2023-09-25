#include <bits/stdc++.h>

using namespace std;

int ar[101];

int main()
{
    int n; cin >> n;
    int a, b; cin >> a >> b;

    cout << min(n - a, b + 1);

    return 0;
}
