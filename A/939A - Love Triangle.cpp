#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    int flag = 0;
    for(int i = 1; i <= n; i++)
        if(v[v[v[i]]] == i) flag = 1;

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
